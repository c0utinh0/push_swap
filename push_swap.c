/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/08/17 17:48:08 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_create_list()
{
	return	NULL;
}

void	ft_print_list(t_node	*p)
{
	t_node	*node;

	node = p;
	while (node != NULL)
	{
		ft_printf("%d -> ", node->data);
		node = node->next;
	}
	ft_printf("NULL\n");
}

void	ft_add_node(t_node	**p, int x)
{
	t_node	*node;

	node = (t_node*) malloc(sizeof(t_node));
	if (node == NULL)
		exit(EXIT_FAILURE);
	node->data = x; //Adiciona o valor de x no campo data do nodo
	node->next = *p; //Aponta o node criado para o primeiro nodo
	*p = node; //Faz o inicio da lista apontar para o nodo criado

}


void	ft_insert_args(t_node	**p, char	*argv[], int argc)
{
	while (argc != 1)
		ft_add_node(p, ft_atoi(argv[--argc]));
}

/*
void	ft_bubble(t_node	**list, int argc)
{
	t_node	*temp;
	t_node	**node;

	temp = *list;
	node = &temp;
	// BUBBLE SORT
	unsigned int mudanca = 1;
	int i;

    while (mudanca)
	{
        mudanca = 0;
        while(temp->next != NULL)
		{
            if (temp->data > temp->next->data)
			{
				sa(&temp, argc);
//				node = temp;
				mudanca = 1;
			}
				temp = temp->next;
        }
		temp = *list;
//		(*list) = node;
    }
}
*/
/*
void ft_bubble(t_node** head, int count)
{
    t_node** h;
    int i, j, swapped;

    for (i = 0; i <= count; i++)
    {

        h = head;
        swapped = 0;

        for (j = 0; j < count - i - 1; j++)
        {

            t_node* p1 = *h;
            t_node* p2 = p1->next;

            if (p1->data > p2->data)
            {

                // update the link after swapping 
                *h = sa(p1, p2);
                swapped = 1;
            }

            h = &(*h)->next;
        }

        // break if the loop ended without any swap 
        if (swapped == 0)
            break;
    }
}
*/

void	ft_sort(t_node	**list, int	len)
{

}

int	main(int argc, char	*argv[])
{
	t_node *stack_a; 

	stack_a = ft_create_list();
	ft_insert_args(&stack_a, argv, argc);
	ft_print_list(stack_a);
	ft_bubble(&stack_a, argc);
//	sa(&stack_a, argc);
	ft_print_list(stack_a);

	return (0);
}
