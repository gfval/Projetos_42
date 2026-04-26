/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 06:45:28 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/12 11:08:10 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_check_col_top(t_grid *grid)
{
	int	col;

	col = 0;
	while (col < grid->grid_size)
	{
		if (ft_count_col_top(grid, col) != grid->col_top[col])
			return (0);
		col++;
	}
	return (1);
}

int	ft_check_col_bottom(t_grid *grid)
{
	int	col;

	col = 0;
	while (col < grid->grid_size)
	{
		if (ft_counter_col_bottom(grid, col) != grid->col_bottom[col])
			return (0);
		col++;
	}
	return (1);
}

int	ft_check_row_left(t_grid *grid)
{
	int	row;

	row = 0;
	while (row < grid->grid_size)
	{
		if (ft_counter_row_left(grid, row) != grid->row_left[row])
			return (0);
		row++;
	}
	return (1);
}

int	ft_check_row_right(t_grid *grid)
{
	int	row;

	row = 0;
	while (row < grid->grid_size)
	{
		if (ft_counter_row_right(grid, row) != grid->row_right[row])
			return (0);
		row++;
	}
	return (1);
}

int	ft_check_views(t_grid *grid)
{
	if (!ft_check_col_top(grid))
		return (0);
	if (!ft_check_col_bottom(grid))
		return (0);
	if (!ft_check_row_left(grid))
		return (0);
	if (!ft_check_row_right(grid))
		return (0);
	return (1);
}
