/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:17:48 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/09/01 15:13:26 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_node
{
	unsigned int	index;
	int				data;
	struct s_node	*next;
}	t_node;

void	sa(t_node	**list);
void	fake_sa(t_node	**list);
void	sb(t_node	**list);
void	ss(t_node	**list_a, t_node	**list_b);
void	pa(t_node	**list_a, t_node	**list_b);
void	pb(t_node	**list_a, t_node	**list_b);
void	ra(t_node	**list);
void	fake_ra(t_node	**list);
void	rb(t_node	**list);
void	rr(t_node	**list_a, t_node	**list_b);
void	rra(t_node	**list);
void	rrb(t_node	**list);
void	rrr(t_node	**list_a, t_node	**list_b);

void	ft_index_list(t_node	**list);
int		ft_insert_args(t_node	**p, char	*argv[], int argc);
int		ft_check_error(t_node	**p, char	*argv[], int argc);
void	ft_index_list_comp(t_node **tmp, t_node **aux,
			t_node **list, unsigned int *index);
void	ft_print_index(t_node	*list);
void	ft_print_list(t_node	*list);
int		ft_list_len(t_node	**list_a);
int		ft_check_sort(t_node **list);
void	ft_concat(t_node	**list_a, t_node	**list_b);
void	ft_concat_comp(t_node **stack_a,
			t_node **stack_b, int *a_max, int *small);
int		ft_max_value(t_node **list);
void	ft_add_node(t_node	**p, int x);
t_node	*ft_create_list(void);
void	ft_remove_list(t_node *list);
void	ft_add_node(t_node	**p, int x);
int		ft_check_duplicate(t_node **list);

void	bubble_sort(t_node	**list);
void	fake_bubble_sort(t_node	**list);
void	double_sort(t_node	**list_a, t_node	**list_b);
void	radix_sort(t_node	**list_a, t_node	**list_b);
void	three_values(t_node **list_a, t_node **list_b);
void	five_values(t_node **list_a, t_node **list_b);

#endif
