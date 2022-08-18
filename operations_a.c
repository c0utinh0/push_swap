/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:01:53 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/18 11:01:25 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	sa(t_node	**node, int argc)
{
	t_node	*node_a;
	t_node	*node_b;

	if (argc < 2)
		return ;
	node_a = *node;
	node_b = (*node)->next;
	*node = node_b;
	node_a->next = node_b->next;
	node_b->next = node_a;
	write(1, "sa\n", 3);
	}

	void	pa(t_node	**node_a, t_node	**node_b, int argc)
	{
		t_node	*node;

	if (argc == 0)
		return ;
	node = *node_b;
	*node_b = (*node_b)->next;
	node->next = *node_a;
	*node_a = node;
	write(1, "pa\n", 3);
}

void	ra(t_node	**list, int argc)
{
	t_node	*node;
	t_node	*aux;

	if (argc == 0)
		return ;
	node = *list;
	aux = *list;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
	*list = (*list)->next;
	node->next = NULL;
	write(1, "ra\n", 3);
}

void	rra(t_node	**list, int argc)
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
	write(1, "rra\n", 4);
}




























