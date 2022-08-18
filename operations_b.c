/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:52:28 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/18 08:35:23 by dcoutinh         ###   ########.fr       */
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

void	pb(t_list	*list_a, t_list	*list_b)
{
	t_node	*node;

	if (list_b->len == 0)
		return ;
	node = list_a->start;
	list_a->start = list_a->start->next;
	node->next = list_b->start;
	list_b->start = node;
	write(1, "pb\n", 3);
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
