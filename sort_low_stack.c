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

int	sort_3(t_list **stack_a, t_list **stack_b)
{
	t_list	*element;

	element = *stack_a;
	if (element->valor > element->next->valor)
		sa(stack_a);
	return (1);
}
