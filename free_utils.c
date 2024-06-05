/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:56:28 by aalamino          #+#    #+#             */
/*   Updated: 2024/06/05 13:32:45 by aalamino         ###   ########.fr       */
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
	free(stack);
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
