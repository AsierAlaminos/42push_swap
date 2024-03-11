/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:42:34 by aalamino          #+#    #+#             */
/*   Updated: 2024/03/10 15:08:57 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void  radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*element;
	int		max;
	int		i;
	int		j;
	int		stack_size;

	i = 0;
	stack_size = size_stack(stack_a);
	max = max_bits(stack_a);
	while (i < max)
	{
		j = 0;
		while (j < stack_size)
		{
			element = *stack_a;
			if (((element->id >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (size_stack(stack_b))
			pa(stack_a, stack_b);
		i++;
	}
}

int	max_bits(t_list **stack)
{
	int		max;
	int		bits;
	t_list	*element;

	element = *stack;
	max = element->id;
	while (element)
	{
		if (element->id > max)
			max = element->id;
		element = element->next;
	}
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
