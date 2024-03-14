# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 14:47:35 by aalamino          #+#    #+#              #
#    Updated: 2024/03/10 14:42:25 by aalamino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CCFLAGS = -Wall -Wextra -Werror
FSANITIZE = -fsanitize=address

FILES   = push_swap.c push.c swap.c rotate.c reverse.c lists.c push_swap_utils.c ft_split.c sort_low_stack.c stack_utils.c create_stack.c ft_strncmp.c ft_strlen.c sort.c radix.c free_utils.c

OBJS = $(FILES:.c=.o)

all: $(NAME)

lib: $(LIBFT)

$(NAME): $(OBJS)
	cc $(CCFLAGS) $(FILES) -o $(NAME)

.o: .c
	cc $(CCFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

sanitize: fclean
	cc $(CCFLAGS) $(FSANITIZE) $(FILES) -o $(NAME)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re lib
