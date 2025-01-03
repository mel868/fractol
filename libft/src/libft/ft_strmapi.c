/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferaoun <mferaoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:34:03 by niperez           #+#    #+#             */
/*   Updated: 2024/12/24 11:31:01 by mferaoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*smap;

	i = 0;
	smap = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (smap == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		smap[i] = f(i, s[i]);
		i++;
	}
	smap[i] = '\0';
	return (smap);
}
