/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:21:03 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/15 17:46:51 by aalamino         ###   ########.fr       */
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

int	sort_list(t_list **stack_a, t_list **stack_b, int argc)
{
	if (argc == 4)
		return (1);
	//if (argc == 7)
		//return (1);
	//return algoritmo();
	return (0);
}
