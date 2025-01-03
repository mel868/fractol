/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferaoun <mferaoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:24:26 by niperez           #+#    #+#             */
/*   Updated: 2024/12/24 11:30:08 by mferaoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	if (lst != NULL && *lst != NULL && *del != NULL)
	{
		node = *lst;
		while (node != NULL)
		{
			tmp = node->next;
			ft_lstdelone(node, del);
			node = tmp;
		}
		*lst = NULL;
	}
}
