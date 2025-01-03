/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferaoun <mferaoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:48:32 by niperez           #+#    #+#             */
/*   Updated: 2024/12/24 11:30:20 by mferaoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (d == s || len == 0)
		return (dst);
	if (d < s)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			d[len] = s[len];
	return (dst);
}
