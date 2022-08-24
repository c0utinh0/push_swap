/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:11:28 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/24 15:56:03 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_node **list)
{
	int	i;
	int len;

	i = 0;
	len = ft_list_len(list);
	while (ft_check_sort(list))
	{
		if ((*list)->data > (*list)->next->data)
			sa(list);
		ra(list);
		i++;
		if (i == (len - 1))
		{
			ra(list);
			i = 0;
		}
	}
}

void	double_sort(t_node **list_a, t_node **list_b)
{
//	int	i;
	int	ia;
	int	ib;
	int len_a;
	int len_b;

//	i = 0;
	ia = 0;
	ib = 0;
	len_a = ft_list_len(list_a);
	len_b = ft_list_len(list_b);
	while (ft_check_sort(list_a) || ft_check_sort(list_b))
	{
		if ((*list_a)->data > (*list_a)->next->data && (*list_b)->data > (*list_b)->next->data)
		{
			ss(list_a, list_b);
			if(ft_check_sort(list_a) && ft_check_sort(list_b))
				rr(list_a, list_b);
			else if (ft_check_sort(list_a))
				ra(list_a);
			else if (ft_check_sort(list_b))
				rb(list_b);
			ia++;
			ib++;
		}
		else if ((*list_a)->data > (*list_a)->next->data)
		{
			sa(list_a);
			if(ft_check_sort(list_a))
				ra(list_a);
			ia++;
		}
		else
		{
			sb(list_b);
			if(ft_check_sort(list_b))
				rb(list_b);
			ib++;
		}	
		if (ia == (len_a - 1))
		{
			if(ft_check_sort(list_a))
				ra(list_a);
			ia = 0;
		}
		if (ib == (len_b - 1))
		{
			if(ft_check_sort(list_b))
				rb(list_b);
			ib = 0;
		}


	}
}

/*
void	double_sort(t_node **list_a, t_node **list_b)
{
	int	i;
	int len_a;
	int len_b;

	i = 0;
	len_a = ft_list_len(list_a);
	len_b = ft_list_len(list_b);
	while (ft_check_sort(list_a) && ft_check_sort(list_b))
	{
		if ((*list_b)->data > (*list_b)->next->data)
			ss(list_a, list_b);
		rr(list_a, list_b);
		i++;
		if (i == (len_b - 1))
		{
			rr(list_a, list_b);
			i = 0;
		}
	}
}
*/
