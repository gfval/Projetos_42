/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 06:27:37 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/12 11:09:17 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_solve(t_grid *grid, int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == grid->cells_total)
		return (ft_check_views(grid));
	row = pos / grid->grid_size;
	col = pos % grid->grid_size;
	num = 1;
	while (num <= grid->grid_size)
	{
		if (ft_is_safe(grid, row, col, num))
		{
			grid->data[row][col] = num;
			if (ft_solve(grid, pos + 1))
				return (1);
			grid->data[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	ft_is_safe(t_grid *grid, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < grid->grid_size)
	{
		if (grid->data[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < grid->grid_size)
	{
		if (grid->data[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}
