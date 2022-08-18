/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:52:28 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/18 10:23:04 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node	**node, int argc)
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

void	pb(t_node	**node_a, t_node	**node_b, int argc)
	{
		t_node	*node;

	if (argc == 0)
		return ;
	node = *node_a;
	*node_a = (*node_a)->next;
	node->next = *node_b;
	*node_b = node;
	write(1, "pa\n", 3);
}

void	rb(t_list	*list)
{
	t_node	*node;
	t_node	*aux;

	if (list->len == 0)
		return ;
	node = list->start;
	aux = list->start;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
	list->start = list->start->next;
	node->next = NULL;
	write(1, "rb\n", 3);
}

void    rrb(t_list      *list)
{
        t_node  *aux;
        t_node  *node;

        node = list->start;
        aux = list->start;
        while (aux->next->next != NULL)
                aux = aux->next;
        aux->next->next = list->start;
        list->start = aux->next;
        aux->next = NULL;
        write(1, "rrb\n", 4);
}
