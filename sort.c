/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:11:28 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/18 18:24:09 by dcoutinh         ###   ########.fr       */
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
void	ft_sort(t_node **list_a, t_node **list_b, int len)
{
	int	i;
//	t_node	**temp;

//	temp = list_a;
	i = 0;
	(void)list_b;
	while (ft_check_sort(list_a))
	{
		if ((*list_a)->data > (*list_a)->next->data)
			sa(list_a, len);
		ra(list_a, len);
		i++;
		if (i == (len - 1))
		{
			ra(list_a, len);
			i = 0;
		}
	}
//	ft_printf("%d\n", i);
//	ft_print_list(*list_a);
	
}
