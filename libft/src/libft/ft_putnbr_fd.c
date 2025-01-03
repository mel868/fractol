/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferaoun <mferaoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:36:08 by niperez           #+#    #+#             */
/*   Updated: 2024/12/24 11:30:25 by mferaoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < -9)
	{
		ft_putchar_fd('-', fd);
		nb = -1 * n;
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -1 * n;
		ft_putchar_fd(nb + '0', fd);
	}
	else if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
