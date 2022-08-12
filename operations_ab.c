/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:52:36 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/11 17:37:59 by dcoutinh         ###   ########.fr       */
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

void	rr(t_list	*list_a, t_list	*list_b)
{
	t_node	*node_a;
	t_node	*node_b;
	t_node	*aux;

	if (list_a->len == 0 || list_b->len == 0)
		return ;
	node_a = list_a->start;
	aux = list_a->start;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node_a;
	list_a->start = list_a->start->next;
	node_a->next = NULL;
	node_b = list_b->start;
	aux = list_b->start;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node_b;
	list_b->start = list_b->start->next;
	node_b->next = NULL;
	write(1, "rr\n", 3);
}

void    rrr(t_list	*list_a, t_list	*list_b)
{
	t_node	*aux;
	t_node	*node_a;
	t_node	*node_b;

	node_a = list_a->start;
	aux = list_a->start;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next->next = list_a->start;
	list_a->start = aux->next;
	aux->next = NULL;
	node_b = list_b->start;
	aux = list_b->start;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next->next = list_b->start;
	list_b->start = aux->next;
	aux->next = NULL;
	write(1, "rrr\n", 4);
}
