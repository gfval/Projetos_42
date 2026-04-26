/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 06:08:42 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/12 11:07:13 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_parse_views(t_grid *grid, char *str)
{
	int	*views[4];
	int	pos;
	int	num;

	views[0] = grid->col_top;
	views[1] = grid->col_bottom;
	views[2] = grid->row_left;
	views[3] = grid->row_right;
	pos = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '9')
		{
			num = *str - '0';
			views[pos / 4][pos % 4] = num;
			pos++;
		}
	str++;
	}
}
