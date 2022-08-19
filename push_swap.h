/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:17:48 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/19 08:47:45 by dcoutinh         ###   ########.fr       */
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

void	ft_print_list(t_node	*list);
void	sa(t_node	**list, int argc);
void	sb(t_node	**list, int argc);
void	ss(t_node	**list_a, t_node	**list_b, int argc);
void	pa(t_node	**list_a, t_node	**list_b, int argc);
void	pb(t_node	**list_a, t_node	**list_b, int argc);
void	ra(t_node	**list, int argc);
void	rb(t_node	**list, int argc);
void	rr(t_node	**list_a, t_node	**list_b, int argc);
void	rra(t_node	**list);
void	rrb(t_node	**list);
void	rrr(t_node	**list_a, t_node	**list_b);
void	sort(t_node	**list_a, t_node	**list_b, int argc);
int	ft_check_sort(t_node **list);
void	three_values(t_node **list_a, t_node **list_b, int argc);


#endif
