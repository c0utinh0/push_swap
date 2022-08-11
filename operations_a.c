/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:01:53 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/11 18:00:19 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list	*list)
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
	write(1, "sa\n", 3);
}

void	pa(t_list	*list_a, t_list	*list_b)
{
	t_node	*node;

	if (list_a->len == 0)
		return ;
	node = list_b->start;
	list_b->start = list_b->start->next;
	node->next = list_a->start;
	list_a->start = node;
	write(1, "pa\n", 3);
}

void	ra(t_list	*list)
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
	write(1, "ra\n", 3);
}

void	rra(t_list	*list)
{
	
}
