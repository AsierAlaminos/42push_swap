/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:01:54 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/11 14:19:48 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	reverse(t_list **stack)
{
	t_list	*pen;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	last = ft_lstlast(*stack);
	pen = *stack;
	while (pen)
	{
		if (pen->next->next == NULL)
		{
			pen->next = NULL;
			break;
		}
		pen = pen->next;
	}
	last->next = *stack;
	*stack = last;
	return (0);
}

int	rra(t_list **stack_a)
{
	if (reverse(stack_a) == -1)
		return (-1);
	write(1, "rra\n", 4);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (reverse(stack_b) == -1)
		return (-1);
	write(1, "rrb\n", 4);
	return (0);
}

int rrr(t_list **stack_a, t_list **stack_b)
{
	if (reverse(stack_a) == -1 || reverse(stack_b))
		return (-1);
	write(1, "rrr\n", 4);
	return (0);
}
