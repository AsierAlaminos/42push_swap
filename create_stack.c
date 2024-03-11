/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:15:47 by aalamino          #+#    #+#             */
/*   Updated: 2024/03/10 14:37:48 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h>
#include <unistd.h>

t_list	**create_stack_a(int argc, char **argv)
{
	t_list	**stack;
	char	**numbers;
	int		i;

	stack = (t_list **)malloc(sizeof(t_list));
	numbers = argv;
	i = 1;
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		--i;
		argc = arg_lenght(numbers);
	}
	if (check_errors(numbers) == -1 || check_numbers(numbers) == -1)
	{
		close_program();
	}
	while (i < argc)
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(numbers[i++])));
	return (stack);
}

int	check_errors(char **nums)
{
	int		i;
	int		j;

	i = 1;
	while (nums[i] != NULL)
	{
		j = 0;
		while (nums[i][j] != '\0')
		{
			if ((nums[i][j] < '0' || nums[i][j] > '9') && nums[i][j] != ' '
				&& nums[i][j] != '-')
				return (-1);
			++j;
		}
		++i;
	}
	return (0);
}

int	check_numbers(char **nums)
{
	int	i;
	int	j;

	i = 0;
	while (nums[i] != NULL)
	{
		j = i + 1;
		while (nums[j] != NULL)
		{
			if (ft_atoi(nums[i]) - ft_atoi(nums[j]) == 0)
			{
				//printf("num_rep -> %s / pos -> %d / pos -> %d\n", nums[i], i, j);
				return (-1);
			}
			j++;
		}
		i++;
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
