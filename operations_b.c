/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:52:28 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/09 16:57:30 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list	*list)
{
	t_node	*node_a;
	t_node	*node_b;

	if (list->len < 2)
		return ;
	node_a = list->start;
	node_b = list->start->next;
	list->start = node_b;
	node_a->next = node_b->next;
	node_b->next = node_a;
	write(1, "sb\n", 3);
}
