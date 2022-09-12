/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:36:18 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/09/12 09:25:26 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix_sort(t_node	**list_a, t_node	**list_b)
{
	int	len_a;
	int	len_b;
	int	bit;
	int	aux;
	int	i;

	bit = 0;
	while (ft_check_sort(list_a))
	{
		len_a = ft_list_len(list_a);
		i = 0;
		while (i++ < len_a && ft_check_sort(list_a))
		{
			if ((*list_a)->index & (1 << bit))
				ra(list_a);
			else
				pb(list_a, list_b);
		}
		len_a = ft_list_len(list_a);
		len_b = ft_list_len(list_b);
		aux = len_b;
		while (len_b--)
			pa(list_a, list_b);
		bit++;
	}
}
