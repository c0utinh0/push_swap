/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/09 11:15:20 by dcoutinh         ###   ########.fr       */
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
	node->data = x; //Adiciona o valor de x no campo data do nodo
	node->next = *p; //Aponta o node criado para o primeiro nodo
	*p = node; //Faz o inicio da lista apontar para o nodo criado

}


void	ft_insert_args(t_node	**p, char	*argv[], int argc)
{
	while (argc != 1)
		ft_add_node(p, ft_atoi(argv[--argc]));
}


int	main(int argc, char	*argv[])
{
	t_node *stack_a; 

	stack_a = ft_create_list();
	ft_insert_args(&stack_a, argv, argc);
	sa(&stack_a);
	ft_print_list(stack_a);

	return (0);
}
