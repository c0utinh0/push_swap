/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/23 17:31:22 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*ft_create_list()
{
	return	NULL;
}

void	ft_print_list(t_node	*p)
{
	t_node	*node;

	node = p;
	while (node != NULL)
	{
		ft_printf("%d -> ", node->data);
		node = node->next;
	}
	ft_printf("NULL\n");
}

static void	ft_add_node(t_node	**p, int x)
{
	t_node	*node;

	node = (t_node*) malloc(sizeof(t_node));
	if (node == NULL)
		exit(EXIT_FAILURE);
	node->data = x;
	node->next = *p;
	*p = node;
}

static void	ft_insert_args(t_node	**p, char	*argv[], int argc)
{
	while (argc != 1)
		ft_add_node(p, ft_atoi(argv[--argc]));
}

int	main(int argc, char	*argv[])
{
	t_node *stack_a;
	t_node *stack_b;

	stack_a = ft_create_list();
	stack_b = ft_create_list();
	ft_insert_args(&stack_a, argv, argc);
	if ((argc - 1) == 3)
		three_values(&stack_a, &stack_b);
//	merge_sort(&stack_a, &stack_b);
	bubble_sort(&stack_a, &stack_b);

//	ft_insert_args(&stack_b, argv, argc);
//	ft_print_list(stack_a);
//	ft_print_list(stack_b);
	return (0);
}
