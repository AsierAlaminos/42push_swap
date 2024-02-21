/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:57:11 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/21 18:16:42 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>
#include <stdlib.h>

int	sort(t_list **stack_a, t_list **stack_b, int argc)
{
	if (argc == 4)
		return (1);
	//if (argc == 7)
		//return (1);
	//return algoritmo();
}

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
	printf("argc: %d\n", argc);
	while (i < argc)
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(numbers[i++])));
	return (stack);
}

void  print_list(t_list **stack)
{
	t_list	*number;

	number = *stack;
	while (number)
	{
		printf("num: %d\n", number->valor);
		number = number->next;
	}
}

int main(int argc, char **argv)
{
	t_list	**stack_a;
	//t_list	**stack_b;
	t_list	*number;

	if (argc <= 1)
		exit(1);
	printf("argc: %d\n", argc);
	stack_a = create_stack_a(argc, argv);
	//stack_b = (t_list **)malloc(sizeof(t_list));
	number = *stack_a;
	printf("num: %d\n", number->valor);
	rra(stack_a);
	printf("is_sort-> %d\n", is_sort(stack_a));
	print_list(stack_a);
	return (0);
}
