/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:45:28 by aalamino          #+#    #+#             */
/*   Updated: 2024/03/10 14:48:33 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	num_pos(t_list **stack, int num)
{
	int		i;
	t_list	*element;

	element = *stack;
	i = 0;
	while (element->valor != num)
	{
		element = element->next;
		i++;
	}
	return (i);
}

int	size_stack(t_list **stack)
{
	int		i;
	t_list	*element;

	i = 0;
	element = *stack;
	while (element != NULL)
	{
		i++;
		element = element->next;
	}
	return (i);
}

int	get_pos(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*element;

	i = 0;
	element = *stack_a;
	if ((*stack_b)->valor > bigger_elem(stack_a)
		|| (*stack_b)->valor < smallest_elem(stack_a))
		sort_for_elem(stack_a);
	else
	{
		while (element && element->next)
		{
			i++;
			if ((*stack_b)->valor > element->valor
				&& (*stack_b)->valor < element->next->valor)
				return (i);
			element = element->next;
		}
	}
	return (i);
}

int	bigger_elem(t_list **stack)
{
	t_list	*max;
	t_list	*element;

	max = *stack;
	element = (*stack)->next;
	while (element)
	{
		if (max->valor < element->valor)
			max = element;
		element = element->next;
	}
	return (max->valor);
}

int	smallest_elem(t_list **stack)
{
	t_list	*min;
	t_list	*element;

	min = *stack;
	element = (*stack)->next;
	while (element)
	{
		if (min->valor > element->valor)
			min = element;
		element = element->next;
	}
	return (min->valor);
}
