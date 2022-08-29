/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:09:04 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/29 17:24:24 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_remove_list(t_node *list)
{
	t_node *next;
	t_node *tmp;

	tmp = list;
	while(tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
