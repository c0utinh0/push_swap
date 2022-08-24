/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:36:44 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/24 17:51:10 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while ((*aux)->next != NULL)
	{
		aux = &(*aux)->next;
		len++;
	}
	return (len);
}

void	ft_concat(t_node** stack_a, t_node** stack_b)
{
    int    small;

    if ((*stack_a)->data > (*stack_b)->data)
        small = (*stack_b)->data;
    else
        small = (*stack_a)->data;
    while ((*stack_b) != NULL)
    {
        if ((*stack_a)->data < (*stack_b)->data)
            ra(stack_a);
        else
            pa(stack_a, stack_b);
        if ((*stack_a)->data == small)
            pa(stack_a, stack_b);
    }
    while ((*stack_a)->data != small)
            ra(stack_a);
}
