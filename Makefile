# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 14:47:35 by aalamino          #+#    #+#              #
#    Updated: 2024/02/11 18:21:14 by aalamino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CCFLAGS = -Wall -Wextra -Werror

FILES   = push_swap.c push.c swap.c rotate.c reverse.c lists.c push_swap_utils.c ft_split.c

OBJS = $(FILES:.c=.o)

all: $(NAME)

lib: $(LIBFT)

$(NAME): $(OBJS)
	cc $(CCFLAGS) $(FILES) -o $(NAME)

.o: .c
	cc $(CCFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re lib
