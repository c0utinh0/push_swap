/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/09/01 16:15:03 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_create_list(void)
{
	return (NULL);
}

int	main(int argc, char	*argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = ft_create_list();
	stack_b = ft_create_list();
	(void)argv;
	if ((argc - 1) > 1)
	{
		if (ft_check_error(&stack_a, argv, argc))
			return (write(1, "Error\n", 6));
		if ((argc - 1) == 3)
			three_values(&stack_a, &stack_b);
		else if ((argc - 1) == 5)
			five_values(&stack_a, &stack_b);
		else
		{
			ft_index_list(&stack_a);
			radix_sort(&stack_a, &stack_b);
		}
	}
	ft_remove_list(stack_a);
	ft_remove_list(stack_b);
	return (0);
}
