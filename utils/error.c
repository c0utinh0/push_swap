/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:20:19 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/09/12 14:16:07 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_duplicate(t_node **list)
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
			return (1);
		}
		temp = &(*temp)->next;
	}
	ft_remove_list(t);
	return (0);
}

int	ft_check_error(t_node	**stack_a, char	*argv[], int argc)
{
	if (ft_insert_args(stack_a, argv, argc))
		return (1);
	if (ft_check_duplicate(stack_a))
		return (1);
	return (0);
}

int	ft_check_arg(char	*arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-' || arg[i] == '+')
	{
		i++;
		while (arg[i] != '\0')
		{
			if (!(ft_isdigit(arg[i])))
				return (1);
			i++;
		}
	}
	else
	{
		while (arg[i] != '\0')
		{
			if (!(ft_isdigit(arg[i])))
				return (1);
			i++;
		}
	}
	return (0);
}
