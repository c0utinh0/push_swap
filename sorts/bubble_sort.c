/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:11:28 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/31 13:47:53 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	bubble_sort(t_node **list)
{
	int	i;
	int	len;

	i = 0;
	len = ft_list_len(list);
	while (ft_check_sort(list))
	{
		if ((*list)->data > (*list)->next->data)
			sa(list);
		ra(list);
		i++;
		if (i == (len - 1))
		{
			ra(list);
			i = 0;
		}
	}
}

void	fake_bubble_sort(t_node **list)
{
	int	i;
	int	len;

	i = 0;
	len = ft_list_len(list);
	while (ft_check_sort(list))
	{
		if ((*list)->data > (*list)->next->data)
			fake_sa(list);
		fake_ra(list);
		i++;
		if (i == (len - 1))
		{
			fake_ra(list);
			i = 0;
		}
	}
}
