/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferaoun <mferaoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:25:03 by niperez           #+#    #+#             */
/*   Updated: 2024/12/24 11:30:12 by mferaoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_lst(t_list *head, void (*del)(void *), void *content)
{
	del(content);
	ft_lstclear(&head, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (new == NULL)
			return (ft_free_lst(head, del, content), NULL);
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
