/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:17:48 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/09 11:15:01 by dcoutinh         ###   ########.fr       */
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
	struct	s_node	*next;
}	t_list;

void	sa(t_node	**p);
void	ft_print_list(t_node	*p);


#endif
