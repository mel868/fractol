/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferaoun <mferaoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:06:57 by niperez           #+#    #+#             */
/*   Updated: 2024/12/24 11:30:16 by mferaoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = (const unsigned char *) s;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
