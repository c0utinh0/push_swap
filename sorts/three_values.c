/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:14:36 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/25 18:40:45 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_option(char op, t_node **list_a, t_node **list_b)
{
	if (op == 'a')
	{
		pb(list_a, list_b);
		sa(list_a);
		pa(list_a, list_b);
	}
	else if (op == 'b')
	{
		ra(list_a);
		sa(list_a);
	}
}

void	three_values(t_node **list_a, t_node **list_b)
{
	int	data_a;
	int	data_b;
	int	data_c;

	(void)list_b;
	data_a = (*list_a)->data;
	data_b = (*list_a)->next->data;
	data_c = (*list_a)->next->next->data;
	if ((data_a < data_b) && (data_a < data_c) && (data_c < data_b))
		ft_option('a', list_a, list_b);
	if ((data_b < data_a) && (data_b < data_c))
	{
		if (data_a < data_c)
			sa(list_a);
		else
			ra(list_a);
	}
	if ((data_c < data_a) && (data_c < data_b))
	{
		if (data_a < data_b)
			rra(list_a);
		else
			ft_option('b', list_a, list_b);
	}
}
