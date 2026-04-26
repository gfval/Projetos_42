/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 08:36:16 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/12 11:09:57 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static	void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static	void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + 0;
	write(1, &c, 1);
}

void	ft_print_grid(t_grid *grid)
{
	int	row;
	int	col;

	row = 0;
	while (row < grid->grid_size)
	{
		col = 0;
		while (row < grid->grid_size)
		{
			ft_putnbr(grid->data[row][col]);
			if (col < grid->grid_size - 1)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
