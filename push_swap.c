/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/18 10:22:28 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_create_list()
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

void	ft_add_node(t_node	**p, int x)
{
	t_node	*node;

	node = (t_node*) malloc(sizeof(t_node));
	if (node == NULL)
		exit(EXIT_FAILURE);
	node->data = x;
	node->next = *p;
	*p = node;
}


void	ft_insert_args(t_node	**p, char	*argv[], int argc)
{
	while (argc != 1)
		ft_add_node(p, ft_atoi(argv[--argc]));
}

void	ft_bubble(t_node	**list, int argc)
{
	t_node	**temp;

		temp = list;
	unsigned int mudanca = 1;
	int i;

    while (mudanca)
	{
        mudanca = 0;
        while((*temp)->next != NULL)
		{
            if ((*temp)->data > (*temp)->next->data)
			{
				sa(temp, argc);
				mudanca = 1;
			}
				temp = &(*temp)->next;
        }
		temp = list;
    }
}

int	main(int argc, char	*argv[])
{
	t_node *stack_a;
	t_node *stack_b;

	stack_a = ft_create_list();
	stack_b = ft_create_list();
	ft_insert_args(&stack_a, argv, argc);
	ft_insert_args(&stack_b, argv, argc);
	/*
//	ft_bubble(&stack_a, argc);
	ft_print_list(stack_a);
	sa(&stack_a, argc);
	ft_print_list(stack_a);
	ft_printf("----------\n");
	ft_print_list(stack_b);
	sb(&stack_b, argc);
	ft_print_list(stack_b);
	ft_printf("----------\n");
	ss(&stack_a, &stack_b, argc);
	ft_print_list(stack_a);
	ft_print_list(stack_b);
	ft_printf("----------\n");
	*/
	pb(&stack_a, &stack_b, argc);
	ft_print_list(stack_a);
	ft_print_list(stack_b);


	return (0);
}
