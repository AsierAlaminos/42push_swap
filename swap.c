/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:56:26 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/11 17:52:50 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	swap(t_list **stack)
{
	t_list	*actual;
	t_list	*siguiente;
	t_list	*tmp;

	if (ft_lstsize(*stack) == 0)
		return (-1);
	actual = *stack;
	siguiente = actual->next;
	tmp = actual;
	actual->next = siguiente->next;
	actual->valor = siguiente->valor;
	siguiente->next = tmp->next;
	siguiente->valor = tmp->valor;
	return (0);
}

int sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	write(1, "sa\n", 3);
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	write(1, "sb\n", 3);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if (swap(stack_a) == -1 || swap(stack_b) == -1)
		return (-1);
	write(1, "ss\n", 3);
	return (0);
}
