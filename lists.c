/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:43:38 by aalamino          #+#    #+#             */
/*   Updated: 2024/02/21 17:39:45 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_lstadd_back(t_list **lst, t_list *nuevo)
{
	t_list	*lista;

	if (*lst)
	{
		lista = ft_lstlast(*lst);
		lista->next = nuevo;
		lista->next->next = NULL;
		return ;
	}
	*lst = nuevo;
	(*lst)->next = NULL;
}

void    ft_lstadd_front(t_list **lst, t_list *nuevo)
{
        nuevo->next = *lst;
        *lst = nuevo;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		++i;
		lst = lst->next;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	if (!p || !lst)
		return (NULL);
	while (p->next != NULL)
		p = p->next;
	return (p);
}

t_list	*ft_lstnew(int valor)
{
	t_list	*lista;

	lista = (t_list *)malloc(sizeof(*lista));
	if (!lista)
		return (0);
	lista->valor = valor;
	lista->next = NULL;
	return (lista);
}
