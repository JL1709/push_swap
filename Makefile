# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julian <julian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 12:13:12 by jludt             #+#    #+#              #
#    Updated: 2021/08/30 11:45:41 by julian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

LIBFTPATH = ./libft/libft.a

CFLAGS = -Wall -Werror -Wextra $(LIBFTPATH)

CFILES =	push_swap.c \
			check_input/check_digits.c \
			check_input/check_duplicates.c \
			check_input/check_input.c \
			check_input/check_max.c \
			check_input/check_min_max.c \
			check_input/check_min.c \
			check_input/print_error.c \
			operations/sa.c \
			operations/sb.c \
			operations/ss.c \
			operations/pa.c \
			operations/pb.c \
			operations/ra.c \
			operations/rb.c \
			operations/rr.c \
			operations/rra.c \
			operations/rrb.c \
			operations/rrr.c \
			utils/get_input.c \
			utils/get_stack_size.c \
			utils/initialize_stack.c \
			utils/a_already_sorted.c \
			utils/free_list.c \
			utils/free_arr.c \
			sorting/sort_small_stack.c \
			sorting/sort_two.c \
			sorting/sort_three.c \
			sorting/sort_four.c \
			sorting/sort_five.c \
			sorting/radix_sort.c 

OBJECTS = $(CFILES:.c=.o)

$(NAME):
	make --directory=./libft
	$(CC) $(CFILES) $(CFLAGS) -o $(NAME)

clean: 
	rm -f $(OBJECTS)
	make clean --directory=./libft

fclean:
	rm -f $(NAME) $(OBJECTS)
	make fclean --directory=./libft

re: fclean $(NAME)
	make re --directory=./libft
