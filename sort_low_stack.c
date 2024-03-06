/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:17:18 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/21 18:19:38 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_two(t_list **stack_a)
{
	t_list	*number1;
	t_list	*number2;

	number1 = *stack_a;
	number2 = number1->next;
	if (number1->valor > number2->valor)
		sa(stack_a);
}

void	sort_three(t_list **stack_a)
{
	int		element1;
	int		element2;
	int		element3;
	t_list	*element;

	element = *stack_a;
	element1 = element->valor;
	element2 = element->next->valor;
	element3 = element->next->next->valor;
	if (element1 > element2 && element2 < element3 && element1 < element3) 
		sa(stack_a);
	if (element1 > element2 && element2 > element3)
	{
		sa(stack_a);
		rra(stack_a);
	}
	if (element1 > element2 && element2 < element3 && element1 > element3)
		ra(stack_a);
	if (element1 < element2 && element2 > element3 && element1 < element3)
	{
		sa(stack_a);
		ra(stack_a);
	}
	if (element1 < element2 && element1 > element3 && element2 > element3)
		rra(stack_a);
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	item_pos;

	pb(stack_a, stack_b);
	sort_three(stack_a);
	item_pos = get_pos(stack_a, stack_b);
	choose_dir(stack_a, item_pos);
	pa(stack_a, stack_b);
	item_pos = num_pos(stack_a, smallest_elem(stack_a));
	choose_dir(stack_a, item_pos);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int		item_pos;

	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	while (*stack_b)
	{
		item_pos = num_pos(stack_a, smallest_elem(stack_a));
		choose_dir(stack_a, item_pos);
		item_pos = get_pos(stack_a, stack_b);
		choose_dir(stack_a, item_pos);
		pa(stack_a, stack_b);
	}
	item_pos = num_pos(stack_a, smallest_elem(stack_a));
	choose_dir(stack_a, item_pos);
}

void	choose_dir(t_list **stack, int pos)
{
	int	stack_size;

	stack_size = size_stack(stack);
	if (pos <= stack_size / 2)
		ra_x_times(stack, pos);
	else
		rra_x_times(stack, stack_size - pos);
}
