/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:14:36 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/19 08:48:41 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_values(t_node **list_a, t_node **list_b, int argc)
{
	int	data_a;
	int	data_b;
	int	data_c;

	(void)list_b;
	data_a = (*list_a)->data;
	data_b = (*list_a)->next->data;
	data_c = (*list_a)->next->next->data;
	if ((data_a < data_b) && (data_a < data_c))
	{
		if (data_b < data_c)
			exit(0);
		else
		{
			pb(list_a, list_b, argc);
			sa(list_a, argc);
			pa(list_a, list_b, argc);
		}
	}
	ft_print_list(*list_a);
//	ft_printf("%d\n", data_a);
//	ft_printf("%d\n", data_b);
//	ft_printf("%d\n", data_c);
}

