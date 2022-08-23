/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:36:44 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/23 17:21:07 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sort(t_node **list)
{
	t_node	**aux;

	aux = list;
	while ((*aux)->next != NULL)
	{
		if ((*aux)->data > (*aux)->next->data)
			return (1);
		aux = &(*aux)->next;
	}
	return (0);
}

int	ft_list_len(t_node **list)
{
	t_node	**aux;
	int len;

	aux = list;
	len = 1;
	while ((*aux)->next != NULL)
	{
		aux = &(*aux)->next;
		len++;
	}
	return (len);
}
