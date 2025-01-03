/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferaoun <mferaoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:14:07 by niperez           #+#    #+#             */
/*   Updated: 2024/12/24 11:31:37 by mferaoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_fractal	fractal;

	if (!(argc == 2 && !ft_strcmp(argv[1], "mandelbrot"))
		&& !(argc == 4 && !ft_strcmp(argv[1], "julia")))
	{
		ft_putstr_fd("Please enter :\n", 2);
		ft_putstr_fd("\t\"./fractol mandelbrot\" or \n", 2);
		ft_putstr_fd("\t\"./fractol julia <c_Re> <c_Im>\"\n", 2);
		return (1);
	}
	init_fractal(argv, &fractal);
	fractal_render(&fractal);
	mlx_loop(fractal.mlx);
	close_handler(&fractal);
	return (0);
}
