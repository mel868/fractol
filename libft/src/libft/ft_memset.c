/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferaoun <mferaoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:39:56 by niperez           #+#    #+#             */
/*   Updated: 2024/12/24 11:30:22 by mferaoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	val;

	i = 0;
	ptr = (unsigned char *) b;
	val = (unsigned char) c;
	while (i < len)
	{
		ptr[i] = val;
		i++;
	}
	return (b);
}
