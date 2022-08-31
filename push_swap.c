/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/31 13:24:44 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_duplicate(t_node **list)
{
	t_node	**aux;
	t_node	*t;
	t_node	**temp;

	t = ft_create_list();
	temp = &t;
	aux = list;
	while (*aux != NULL)
	{
		ft_add_node(temp, (*aux)->data);
		aux = &(*aux)->next;
	}
	fake_bubble_sort(temp);
	while ((*temp)->next != NULL)
	{
		if ((*temp)->data == (*temp)->next->data)
		{
			ft_remove_list(t);
			return (0);
		}
		temp = &(*temp)->next;
	}
	ft_remove_list(t);
	return (1);
}

static void	ft_insert_args(t_node	**p, char	*argv[], int argc)
{
	while (argc != 1)
		ft_add_node(p, ft_atoi(argv[--argc]));
}

int	main(int argc, char	*argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = ft_create_list();
	stack_b = ft_create_list();
	ft_insert_args(&stack_a, argv, argc);
	if ((argc - 1) > 1 && ft_check_duplicate(&stack_a))
	{
		if ((argc - 1) == 3)
			three_values(&stack_a, &stack_b);
		else if ((argc - 1) == 5)
			five_values(&stack_a, &stack_b);
		else
		{
			ft_index_list(&stack_a);
			radix_sort(&stack_a, &stack_b);
		}
	}
	return (0);
}
