/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:57:11 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/11 18:58:02 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>
#include <stdlib.h>

t_list	**create_stack_a(int argc, char **argv)
{
	t_list	**stack;
	char	**numbers;
	int		i;

	stack = (t_list **)malloc(sizeof(t_list));
	numbers = argv;
	i = 1;
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		--i;
	}
	while (i < argc)
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(numbers[i++])));
	return (stack);
}

int main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	t_list	*number;

	if (argc <= 1)
		exit(1);
	stack_a = create_stack_a(argc, argv);
	stack_b = (t_list **)malloc(sizeof(t_list));
	number = *stack_a;
	printf("num: %d\n", number->valor);
	pb(stack_a, stack_b);
	number = *stack_b;
	printf("num: %d\n", number->valor);
	return (0);
}
