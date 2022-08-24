/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:59:47 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/24 17:07:47 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	merge_sort(t_node **list_a, t_node **list_b)
{
	int pivot;
	int pushed;
	int len;
	int temp;

//	(void)list_b;
	len = ft_list_len(list_a);
	pushed = len / 2;
	temp = pushed;
	pivot = len - pushed;


//	ft_printf("len: %d\n", len);
//	ft_printf("pivot: %d\n", pivot);
//	ft_printf("pushed: %d\n", pushed);
//	ft_printf("--START--\n");
//	ft_print_list(*list_a);
//	ft_print_list(*list_b);
	while(pushed--)
		pb(list_a, list_b);
//	ft_printf("--PUSHED--\n");
//	ft_print_list(*list_a);
//	ft_print_list(*list_b);
	double_sort(list_a, list_b);
	ft_concat(list_a, list_b);
//	ft_print_list(*list_a);
//	ft_print_list(*list_b);
//	ft_printf("--RETURNED--\n");
//	while(temp--)
//		pa(list_a, list_b);
//	bubble_sort(list_a);
	ft_print_list(*list_a);
//	ft_print_list(*list_b);
}
