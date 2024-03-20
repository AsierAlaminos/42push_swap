/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:15:47 by aalamino          #+#    #+#             */
/*   Updated: 2024/03/11 19:16:47 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

long int	ft_atoi(const char *str)
{
	int			i;
	long int	num;
	int			neg;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		++i;
	if (str[i] == '-')
		neg = neg * -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (int)(str[i] - '0');
		++i;
	}
	return (num * neg);
}

int	is_sort(t_list **stack)
{
	t_list	*element;

	element = *stack;
	while (element->next != NULL)
	{
		if (element->valor > element->next->valor)
			return (-1);
		element = element->next;
	}
	return (0);
}

void	ra_x_times(t_list **stack, int times)
{
	while (times-- > 0)
		ra(stack);
}

void	rra_x_times(t_list **stack, int times)
{
	while (times-- > 0)
		rra(stack);
}

void	sort_for_elem(t_list **stack_a)
{
	int	smallest_pos;
	int	stack_size;

	smallest_pos = num_pos(stack_a, smallest_elem(stack_a));
	stack_size = size_stack(stack_a);
	if (smallest_pos <= stack_size / 2)
		ra_x_times(stack_a, smallest_pos);
	else
		rra_x_times(stack_a, smallest_pos);
}
