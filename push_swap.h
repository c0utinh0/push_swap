/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:17:48 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/09 18:55:12 by dcoutinh         ###   ########.fr       */
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

void	sa(t_list	*list);
void	sb(t_list	*list);
void	ss(t_list	*list_a, t_list	*list_b);
void	ft_print_list(t_list	*list);
void	pa(t_list	*list_a, t_list	*list_b);




#endif
