/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorlopezdeaudicana <marvin@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:36:12 by aitorlope         #+#    #+#             */
/*   Updated: 2022/05/18 00:05:32 by aitorlope        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{

	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&first, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
	
/*
	t_list	*new;
	t_list 	*newini;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);

	while (lst)
	{
		new->content = f(lst->content);
		if (!(new->next = malloc(sizeof(t_list))))
			ft_lstclear(&newini, del);
		new = new->next;
		lst = lst->next;
	}
	return (newini);
*/
}
