/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:15:47 by aalamino          #+#    #+#             */
/*   Updated: 2024/06/05 14:29:34 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h>
#include <unistd.h>

t_list	**create_stack_a(int argc, char **argv, t_list **sb)
{
	t_list	**stack;
	int		i;
	int		j;
	char	**arg;

	i = 1;
	stack = (t_list **)malloc(sizeof(t_list *));
	*stack = NULL;
	while (i < argc)
	{
		arg = ft_split(argv[i++], ' ');
		if (check_errors(arg, 0) == -1)
		{
			liberar(arg, 1);
			close_program(NULL, sb);
		}
		j = 0;
		while (arg[j] != NULL)
			ft_lstadd_back(stack, ft_lstnew(ft_atoi(arg[j++])));
		liberar(arg, 1);
	}
	if (check_numbers(stack) == -1)
		close_program(stack, sb);
	return (stack);
}

int	check_errors(char **nums, int i)
{
	int		j;

	while (nums[i] != NULL)
	{
		j = 0;
		while (nums[i][j] != '\0')
		{
			if ((nums[i][j] < '0' || nums[i][j] > '9') && nums[i][j] != ' '
				&& nums[i][j] != '-')
				return (-1);
			if (nums[i][j] == '-'
				&& (nums[i][j + 1] < '0' || nums[i][j + 1] > '9'))
				return (-1);
			++j;
		}
		++i;
	}
	return (0);
}

int	check_numbers(t_list **nums)
{
	t_list	*element;
	t_list	*tmpelem;

	element = *nums;
	while (element != NULL)
	{
		if (element->valor < -2147483648 || element->valor > 2147483647)
			return (-1);
		tmpelem = element->next;
		while (tmpelem != NULL)
		{
			if (tmpelem->valor == element->valor)
				return (-1);
			tmpelem = tmpelem->next;
		}
		element = element->next;
	}
	return (0);
}

int	arg_lenght(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i] != NULL)
		i++;
	return (i);
}
