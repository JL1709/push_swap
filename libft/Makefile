# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jludt <jludt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 09:51:20 by jludt             #+#    #+#              #
#    Updated: 2021/08/27 16:42:22 by jludt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MANDATORY = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isdigit.c \
			ft_split.c \
			ft_strjoin_n.c \
			ft_strlen.c 
			
BONUS = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstsize.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror *.c
	ar cr $(NAME) *.o

bonus:
	gcc -c -Wall -Wextra -Werror $(BONUS)
	ar cr $(NAME) *.o

.PHONY: clean fclean re

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all
