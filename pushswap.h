/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:00:51 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/11 18:57:50 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				valor;
	struct s_list	*next;
}					t_list;

int	swap(t_list **stack);
int sa(t_list **stack_a);
int sb(t_list **stack_b);
int	ss(t_list **stack_a, t_list **stack_b);

int	push(t_list **stack_f, t_list **stack_t);
int	pa(t_list **stack_a, t_list **stack_b);
int	pb(t_list **stack_a, t_list **stack_b);

int	rotate(t_list **stack);
int	ra(t_list **stack_a);
int	rb(t_list **stack_b);
int	rr(t_list **stack_a, t_list **stack_b);

int	reverse(t_list **stack);
int	rra(t_list **stack_a);
int	rrb(t_list **stack_b);
int rrr(t_list **stack_a, t_list **stack_b);

t_list	**create_stack_a(int argc, char **argv);

t_list	*ft_lstnew(int valor);
void	ft_lstadd_front(t_list **lst, t_list *nuevo);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *nuevo);

int	del_count(char const *s, char c);
int	str_count(char const *s, char c, int i);
char	**liberar(char **arr, int arr_len);
char	**add_str(char const *s, char **arr, int arr_len, char c);
char	**ft_split(char const *s, char c);

int	ft_atoi(const char *str);

#endif
