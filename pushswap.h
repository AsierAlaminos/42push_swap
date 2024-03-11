/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:00:51 by aalamino          #+#    #+#             */
/*   Updated: 2024/03/11 19:17:00 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				valor;
	int				id;
	struct s_list	*next;
}					t_list;

int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

int		push(t_list **stack_f, t_list **stack_t);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);

int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);

int		reverse(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

t_list	**create_stack_a(int argc, char **argv, t_list **sa, t_list **sb);
int		is_sort(t_list **stack);
void	sort(t_list **stack_a, t_list **stack_b, int argc);

t_list	*ft_lstnew(int valor);
void	ft_lstadd_front(t_list **lst, t_list *nuevo);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *nuevo);

int		del_count(char const *s, char c);
int		str_count(char const *s, char c, int i);
char	**liberar(char **arr, int arr_len);
char	**add_str(char const *s, char **arr, int arr_len, char c);
char	**ft_split(char const *s, char c);
long int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);

void	sort_three(t_list **stack_a);
void	sort_five(t_list **stack_a, t_list **stack_b);

int		num_pos(t_list **stack, int num);
int		size_stack(t_list **stack);
void	ra_x_times(t_list **stack, int times);
void	rra_x_times(t_list **stack, int times);
int	get_pos(t_list **stack_a, t_list **stack_b);
int	bigger_elem(t_list **stack);
int	smallest_elem(t_list **stack);
void	choose_dir(t_list **stack, int pos);
void	sort_for_elem(t_list **stack_a);
void	sort_two(t_list **stack_a);
void	choose_sort(int argc, t_list **stack_a, t_list **stack_b);
void	sort_four(t_list **stack_a, t_list **stack_b);
int	check_errors(char **argv);
int	check_numbers(char **nums);
void	sort_list(t_list **stack);
t_list	*get_element(t_list **stack, int valor);
t_list	*get_smallest(t_list **stack, int min_elem);
void  close_program();
void  radix_sort(t_list **stack_a, t_list **stack_b);
int	max_bits(t_list **stack);
int	arg_lenght(char **numbers);
void  free_stack(t_list **stack);

void  print_list(t_list **stack_a, t_list **stack_b);

#endif
