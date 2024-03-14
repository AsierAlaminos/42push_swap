/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:56:28 by aalamino          #+#    #+#             */
/*   Updated: 2024/03/14 10:56:29 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	free_stack(t_list **stack)
{
	t_list	*next;

	while (*stack)
	{
		next = (*stack)->next;
		free(*stack);
		*stack = next;
	}
	*stack = NULL;
}

void	free_numbers(char **numbers, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(numbers[i]);
		i++;
	}
}
