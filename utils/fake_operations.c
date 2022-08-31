/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:01:53 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/31 14:17:38 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fake_sa(t_node	**node)
{
	t_node	*node_a;
	t_node	*node_b;

	node_a = *node;
	node_b = (*node)->next;
	*node = node_b;
	node_a->next = node_b->next;
	node_b->next = node_a;
}

void	fake_ra(t_node	**list)
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
}
