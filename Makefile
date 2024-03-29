# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 16:32:52 by dcoutinh          #+#    #+#              #
#    Updated: 2022/09/13 10:10:22 by dcoutinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRCS =  push_swap.c	\
		utils/operations_a.c	\
		utils/fake_operations.c	\
		utils/operations_b.c	\
		utils/operations_ab.c	\
		utils/error.c	\
		sorts/bubble_sort.c	\
		sorts/radix_sort.c	\
		sorts/three_values.c	\
		sorts/five_values.c	\
		utils/sort_utils.c	\
		utils/sort_utils_comp.c	\
		utils/node_utils.c	\


OBJS = $(SRCS:.c=.o)

LIBFT = make -C libft && cp libft/libft.a $(NAME)

CLIBFT = make -C libft clean

FCLIBFT = make -C libft fclean

all: $(NAME)

$(NAME): $(SRC)
	$(LIBFT)
	$(CC) $(CFLAGS) $(SRCS) $(NAME) -o push_swap

clean: 
	rm -f $(OBJS)
	$(CLIBFT)

fclean:
	rm -f $(NAME)
	$(FCLIBFT)

re: fclean all

.PHONY: all clean fclean re
