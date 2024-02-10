/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:56:26 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/10 21:00:11 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	swap(t_list **stack)
{
	t_list	*actual;
	t_list	*siguiente;
	t_list	*tmp;

	actual = *stack;
	siguiente = actual->next;
	tmp = actual;
	actual->next = siguiente->next;
	actual->posicion = siguiente->posicion;
	actual->valor = siguiente->valor;
	siguiente->next = tmp->next;
	siguiente->posicion = tmp->posicion;
	siguiente->valor = tmp->valor;
	return (0);
}

int sa(t_list **stack_a)
{
	swap(stack_a);
	return (0);
}

int	sb(t_list **stack_b)
{
	swap(stack_b);
	return (0);
}
