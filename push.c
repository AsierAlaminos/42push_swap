/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:00:22 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/11 13:40:19 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	push(t_list **stack_f, t_list **stack_t)
{
	t_list	*first_f;
	t_list	*first_t;
	t_list	*tmp;

	if (ft_lstsize(*stack_f) == 0)
		return (-1);
	first_t = *stack_t;
	tmp = *stack_f;
	first_f = tmp->next;
	*stack_f = first_f;
	if (!first_t)
	{
		first_t = tmp;
		first_t->next = NULL;
		*stack_t = first_t;
	}
	else
	{
		tmp->next = first_t;
		*stack_t = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
	return (0);
}
