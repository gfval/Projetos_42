/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 06:03:19 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/12 11:06:52 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char **argv)
{
	t_grid	grid;

	if (argc < 2)
		return (0);
	ft_init(&grid);
	ft_parse_views(&grid, argv[1]);
	if (ft_solve(&grid, 0))
		ft_print_grid(&grid);
	else
		write(1, "Error\n", 6);
	ft_free(&grid);
	return (0);
}
