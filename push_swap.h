/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:17:48 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/18 10:21:45 by dcoutinh         ###   ########.fr       */
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

typedef struct	s_list
{
	int	len;
	t_node	*start;
}	t_list;

void	ft_print_list(t_node	*list);
void	sa(t_node	**list, int argc);
void	sb(t_node	**list, int argc);
void	ss(t_node	**list_a, t_node	**list_b, int argc);
void	pa(t_node	**list_a, t_node	**list_b, int argc);
void	pb(t_node	**list_a, t_node	**list_b, int argc);
void	ra(t_list	*list);
void	rb(t_list	*list);
void	rr(t_list	*list_a, t_list	*list_b);
void	rra(t_list	*list);
void	rrb(t_list	*list);
void	rrr(t_list	*list_a, t_list	*list_b);

#endif
