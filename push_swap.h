/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:17:48 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/24 08:23:15 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct	s_node
{
	int	data;
	struct	s_node	*next;
}	t_node;

void	sa(t_node	**list);
void	sb(t_node	**list);
void	ss(t_node	**list_a, t_node	**list_b);
void	pa(t_node	**list_a, t_node	**list_b);
void	pb(t_node	**list_a, t_node	**list_b);
void	ra(t_node	**list);
void	rb(t_node	**list);
void	rr(t_node	**list_a, t_node	**list_b);
void	rra(t_node	**list);
void	rrb(t_node	**list);
void	rrr(t_node	**list_a, t_node	**list_b);

void	ft_print_list(t_node	*list);
int	ft_list_len(t_node	**list_a);
int	ft_check_sort(t_node **list);

void	bubble_sort(t_node	**list);
void	double_sort(t_node	**list_a, t_node	**list_b);
void	merge_sort(t_node	**list_a, t_node	**list_b);
void	three_values(t_node **list_a, t_node **list_b);


#endif
