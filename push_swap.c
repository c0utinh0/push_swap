/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/08 11:41:49 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_list()
{
	return	NULL;
}

void	print_list(t_node	*p)
{
	t_node	*q;

	q = p;
	while (q != NULL)
	{
		printf("%d -> ", q->data);
		q = q->next;
	}
	printf("NULL\n");
}

void add_node(t_node	**p, int x)
{
	t_node	*q;

	q = (t_node*) malloc(sizeof(t_node));
	if (q == NULL)
		exit(EXIT_FAILURE);
	q->data = x;
	q->next = *p;
	*p = q;
}

int	main(int argc, char	*argv[])
{
	t_node *L = create_list();
	add_node(&L, 1);
	print_list(L);
	add_node(&L, 10);
	print_list(L);
	add_node(&L, 100);
	print_list(L);

	return (0);
}
