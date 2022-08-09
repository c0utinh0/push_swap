/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:52:36 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/09 17:13:41 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list	*list_a, t_list	*list_b)
{
	t_node	*node_aa;
	t_node	*node_ab;
	t_node	*node_ba;
	t_node	*node_bb;

	if (list_a->len < 2 || list_b->len < 2)
		return ;
	node_aa = list_a->start;
	node_ab = list_a->start->next;
	list_a->start = node_ab;
	node_aa->next = node_ab->next;
	node_ab->next = node_aa;
	node_ba = list_b->start;
	node_bb = list_b->start->next;
	list_b->start = node_bb;
	node_ba->next = node_bb->next;
	node_bb->next = node_ba;
	write(1, "ss\n", 3);
}
