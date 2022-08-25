/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:50:14 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/25 18:45:03 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	five_values(t_node **list_a, t_node **list_b)
{
	pb(list_a, list_b);
	pb(list_a, list_b);
	three_values(list_a, list_b);
	if ((*list_b)->data > (*list_b)->next->data)
			sb(list_b);
	ft_concat(list_a, list_b);
	ft_print_list(*list_a);
}
