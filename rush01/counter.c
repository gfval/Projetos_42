/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 09:21:20 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/12 11:10:59 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_counter_row_left(t_grid *grid, int row)
{
	int	col;
	int	max;
	int	count;

	max = 0;
	count = 0;
	col = 0;
	while (col < grid->grid_size)
	{
		if (grid->data[row][col] > max)
		{
			max = grid->data[row][col];
			count++;
		}
		col++;
	}
	return (count);
}

int	ft_counter_row_right(t_grid *grid, int row)
{
	int	col;
	int	max;
	int	count;

	max = 0;
	count = 0;
	col = grid->grid_size - 1;
	while (col >= 0)
	{
		if (grid->data[row][col] > max)
		{
			max = grid->data[row][col];
			count++;
		}
		col--;
	}
	return (count);
}

int	ft_counter_col_top(t_grid *grid, int col)
{
	int	row;
	int	max;
	int	count;

	max = 0;
	count = 0;
	row = 0;
	while (row < grid->grid_size)
	{
		if (grid->data[row][col] > max)
		{
			max = grid->data[row][col];
			count++;
		}
		row++;
	}
	return (count);
}

int	ft_counter_col_bottom(t_grid *grid, int col)
{
	int	row;
	int	max;
	int	count;

	max = 0;
	count = 0;
	row = grid->grid_size - 1;
	while (row >= 0)
	{
		if (grid->data[row][col] > max)
		{
			max = grid->data[row][col];
			count++;
		}
		row--;
	}
	return (count);
}
