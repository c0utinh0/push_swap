/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:36:44 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/30 14:53:07 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_index_list(t_node **list)
{
	t_node	**aux;
	t_node	*t;
	t_node	**tmp;
	unsigned int index;

	index = 0;
	t = ft_create_list();
	tmp = &t;
	aux = list;
	while (*aux != NULL)
	{
		ft_add_node(tmp, (*aux)->data);
		aux = &(*aux)->next;
	}
	aux = list;
	fake_bubble_sort(tmp);
	while (*tmp != NULL)
	{
		while (*aux != NULL)
		{
			if ((*aux)->data == (*tmp)->data)
				(*aux)->index = index++;
			aux = &(*aux)->next;
		}
		aux = (list);
		tmp = &(*tmp)->next;
	}
	ft_remove_list(t);
}

int	ft_check_sort(t_node **list)
{
	t_node	**aux;

	aux = list;
	while ((*aux)->next != NULL)
	{
		if ((*aux)->data > (*aux)->next->data)
			return (1);
		aux = &(*aux)->next;
	}
	return (0);
}

int	ft_list_len(t_node **list)
{
	t_node	**aux;
	int len;

	aux = list;
	len = 1;
	if((*aux) == NULL)
		return (0);
	while ((*aux)->next != NULL)
	{
		aux = &(*aux)->next;
		len++;
	}
	return (len);
}

int	ft_max_value(t_node **list)
{
	t_node	**aux;
	int max;

	aux = list;
	max = 0;
	while (*aux != NULL)
	{
		if ((*aux)->data > max)
			max = (*aux)->data;
		aux = &(*aux)->next;
	}
	return (max);
}

void	ft_concat(t_node** stack_a, t_node** stack_b)
{
    int	small;
	int a_max;
	int len;

	len = ft_list_len(stack_a);
	a_max = ft_max_value(stack_a);
    if ((*stack_a)->data > (*stack_b)->data)
        small = (*stack_b)->data;
    else
        small = (*stack_a)->data;
    while ((*stack_b) != NULL)
    {
        if ((*stack_a)->data < (*stack_b)->data)
		{
			if((*stack_b)->data > a_max)
			{
				a_max = (*stack_a)->data;
				while ((*stack_a)->data != small)
					ra(stack_a);
				pa(stack_a, stack_b);
				ra(stack_a);
			}
			else
				ra(stack_a);
		}
        else
		{
            pa(stack_a, stack_b);
			ra(stack_a);
		}
    }
    while ((*stack_a)->data != small)
            ra(stack_a);
}
