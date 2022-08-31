/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:52:28 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/31 14:43:49 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_node	**node)
{
	t_node	*node_a;
	t_node	*node_b;

	node_a = *node;
	node_b = (*node)->next;
	*node = node_b;
	node_a->next = node_b->next;
	node_b->next = node_a;
	write(1, "sb\n", 3);
}

void	pb(t_node	**node_a, t_node	**node_b)
{
	t_node	*node;

	node = *node_a;
	*node_a = (*node_a)->next;
	node->next = *node_b;
	*node_b = node;
	write(1, "pb\n", 3);
}

void	rb(t_node	**list)
{
	t_node	*node;
	t_node	*aux;

	node = *list;
	aux = *list;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
	*list = (*list)->next;
	node->next = NULL;
	write(1, "rb\n", 3);
}

void	rrb(t_node	**list)
{
	t_node	*aux;
	t_node	*node;

	node = *list;
	aux = *list;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next->next = *list;
	*list = aux->next;
	aux->next = NULL;
	write(1, "rrb\n", 4);
}
