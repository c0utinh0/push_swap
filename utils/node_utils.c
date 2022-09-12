/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:09:04 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/09/12 14:29:22 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_remove_list(t_node *list)
{
	t_node	*next;
	t_node	*tmp;

	tmp = list;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}

void	ft_add_node(t_node	**p, int x)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node == NULL)
		exit(EXIT_FAILURE);
	node->data = x;
	node->next = *p;
	*p = node;
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

int	ft_insert_args(t_node	**p, char	*argv[], int argc)
{
	long int	num;

	num = 0;
	while (--argc != 0)
	{
		if (ft_check_arg(argv[argc]))
			return (1);
		num = ft_atoi(argv[argc]);
		if (num > 2147483647)
			return (1);
		ft_add_node(p, num);
	}
	return (0);
}

void	ft_print_index(t_node	*p)
{
	t_node	*node;

	node = p;
	while (node != NULL)
	{
		ft_printf("%d -> ", node->index);
		node = node->next;
	}
	ft_printf("NULL\n");
}
