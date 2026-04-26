/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 05:47:00 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/12 11:05:40 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_init(t_grid *grid)
{
	int	i;

	grid->grid_size = 4;
	grid->cells_total = 16;
	grid->col_top = malloc(sizeof(int) * 4);
	grid->col_bottom = malloc(sizeof(int) * 4);
	grid->row_left = malloc(sizeof(int) * 4);
	grid->row_right = malloc(sizeof(int) * 4);
	grid->data = malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		grid->data[i] = malloc(sizeof(int) * 4);
		i++;
	}
}

void	ft_free(t_grid *grid)
{
	int	i;

	free(grid->col_top);
	free(grid->col_bottom);
	free(grid->row_left);
	free(grid->row_right);
	i = 0;
	while (i < 4)
	{
		free(grid->data[i]);
		i++;
	}
	free(grid->data);
}
