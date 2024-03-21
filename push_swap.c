/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:57:11 by aalamino          #+#    #+#             */
/*   Updated: 2024/03/11 19:10:33 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_list(t_list **stack_a, t_list **stack_b)
{
	t_list	*number;

	number = *stack_a;
	printf("\nstack_a:\n");
	while (number)
	{
		printf("num: %ld / id: %d\n", number->valor, number->id);
		number = number->next;
	}
	number = *stack_b;
	printf("\nstack_b:\n");
	while (number)
	{
		printf("num: %ld / id: %d\n", number->valor, number->id);
		number = number->next;
	}
	printf("\n");
}

void	close_program(t_list **stack_a, t_list **stack_b)
{
	if (stack_a != NULL)
		free_stack(stack_a);
	if (stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}

void	choose_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc == 2)
		argc = size_stack(stack_a) + 1;
	if (argc == 3)
		sort_two(stack_a);
	if (argc == 4)
		sort_three(stack_a);
	if (argc == 5)
		sort_four(stack_a, stack_b);
	if (argc == 6)
		sort_five(stack_a, stack_b);
	if (argc > 6)
		radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc <= 1)
		exit(1);
	stack_b = (t_list **)malloc(sizeof(t_list *));
	stack_a = create_stack_a(argc, argv, stack_b);
	sort_list(stack_a);
	choose_sort(argc, stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
