/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_comp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:42:23 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/09/01 11:22:41 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_index_list_comp(t_node **tmp, t_node **aux,
		t_node **list, unsigned int *index)
{
	while (*tmp != NULL)
	{
		while (*aux != NULL)
		{
			if ((*aux)->data == (*tmp)->data)
				(*aux)->index = (*index)++;
			aux = &(*aux)->next;
		}
		aux = (list);
		tmp = &(*tmp)->next;
	}
}

void	ft_concat_comp(t_node **stack_a, t_node **stack_b,
		int *a_max, int *small)
{
	while ((*stack_b) != NULL)
	{
		if ((*stack_a)->data < (*stack_b)->data)
		{
			if ((*stack_b)->data > *a_max)
			{
				*a_max = (*stack_a)->data;
				while ((*stack_a)->data != *small)
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
}
