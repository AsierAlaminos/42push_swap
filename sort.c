/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:21:03 by aalamino          #+#    #+#             */
/*   Updated: 2024/03/10 14:39:25 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	is_sorted(t_list **stack)
{
	t_list	*number;

	number = *stack;
	while (number && number->next)
	{
		if (number->valor > number->next->valor)
			return (-1);
		number = number->next;
	}
	return (0);
}

void	sort_list(t_list **stack)
{
	int		min;
	int		i;
	t_list	*element;
	t_list	*min_elem;

	i = 2;
	min = smallest_elem(stack);
	element = *stack;
	min_elem = get_element(stack, min);
	min_elem->id = 1;
	while (element->next)
	{
		min_elem = get_smallest(stack, min);
		min_elem->id = i;
		min = min_elem->valor;
		element = element->next;
		i++;
	}
}

t_list	*get_element(t_list **stack, int valor)
{
	t_list	*element;

	element = *stack;
	while (element)
	{
		if (element->valor == valor)
			return (element);
		element = element->next;
	}
	return (NULL);
}

t_list	*get_smallest(t_list **stack, int min)
{
	t_list	*element;
	t_list	*min_element;

	element = *stack;
	min_element = *stack;
	while (min_element && min_element->valor <= min)
		min_element = min_element->next;
	while (element)
	{
		if (element->valor < min_element->valor
			&& element->valor > min)
			min_element = element;
		element = element->next;
	}
	return (min_element);
}
