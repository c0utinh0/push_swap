/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/11 17:40:37 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list(t_list	*list)
{
	t_node	*node;

	node = list->start;
	while (node != NULL)
	{
		ft_printf("%d -> ", node->data);
		node = node->next;
	}
	ft_printf("NULL\n");
}

void	ft_add_node(t_list	*list, int x)
{
	t_node	*node;

	node = (t_node*) malloc(sizeof(t_node));
	if (node == NULL)
		exit(EXIT_FAILURE);
	node->data = x; //Adiciona o valor de x no campo data do nodo
	node->next = list->start; //Aponta o node criado para o primeiro nodo
	list->start = node; //Faz o inicio da lista apontar para o nodo criado
	list->len++;
}

void	ft_insert_args(t_list	*list, char	*argv[], int argc)
{
	while (argc != 1)
		ft_add_node(list, ft_atoi(argv[--argc]));
}

void ft_remove_node(t_list	*list)
{
	t_node	*node;

	if (list == NULL) 
		return ;
	node = list->start;
	list->start = list->start->next;
	free(node);
}

int	main(int argc, char	*argv[])
{
	t_list stack_a;
	t_list stack_b;

	// BUBBLE SORT
	bool mudanca = true;
	int i = 0;


	stack_a.len = 0;
	stack_a.start = NULL;
//	stack_b.len = 0;
//	stack_b.start = NULL;

	ft_insert_args(&stack_a, argv, argc);
	
	while (mudanca)
	{
		mudanca = false;
		while ( i < (stack_a.len - 1))
		{

			i++;
		}







	ft_print_list(&stack_a);

/*
	ft_insert_args(&stack_a, argv, argc);
	ft_insert_args(&stack_b, argv, argc);
//	rrr(&stack_a, &stack_b);
//	ft_print_list(&stack_a);
//	rr(&stack_b);
	ft_print_list(&stack_a);
	ft_print_list(&stack_b);
*/

/*
	//TESTES ROTATE
	ft_insert_args(&stack_a, argv, argc);
	ft_insert_args(&stack_b, argv, argc);
	rr(&stack_a, &stack_b);
	ft_print_list(&stack_a);
	ft_print_list(&stack_b);
*/


/*
	//TESTES PUSH
	ft_insert_args(&stack_a, argv, argc);
	ft_insert_args(&stack_b, argv, argc);
	ft_print_list(&stack_a);
	ft_print_list(&stack_b);
	pa(&stack_a, &stack_b);
	ft_print_list(&stack_a);
	ft_print_list(&stack_b);
*/


/*
	//TESTES SWAP
	ft_insert_args(&stack_a, argv, argc);
	ft_insert_args(&stack_b, argv, argc);
	ss(&stack_a, &stack_b);
	ft_print_list(&stack_a);
	ft_print_list(&stack_b);
	sa(&stack_a);
	sb(&stack_b);
	ft_print_list(&stack_a);
	ft_print_list(&stack_b);
*/
	return (0);
}
