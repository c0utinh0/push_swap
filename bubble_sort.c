/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:11:28 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/23 14:37:15 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_node **list_a, t_node **list_b, int len)
{
	int	i;

	i = 0;
	(void)list_b;
	while (ft_check_sort(list_a))
	{
		if ((*list_a)->data > (*list_a)->next->data)
			sa(list_a, len);
		ra(list_a, len);
		i++;
		if (i == (len - 1))
		{
			ra(list_a, len);
			i = 0;
		}
	}
}
