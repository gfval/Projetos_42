/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 05:29:54 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/12 11:05:11 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_grid
{
	int	grid_size;
	int	cells_total;
	int	*col_top;
	int	*col_bottom;
	int	*row_left;
	int	*row_right;
	int	**data;
}	t_grid;

void	ft_init(t_grid *grid);
void	ft_free(t_grid *grid);
void	ft_parse_views(t_grid *grid, char *str);
int		ft_solve(t_grid *grid, int pos);
int		ft_is_safe(t_grid *grid, int row, int col, int num);
int		ft_check_views(t_grid *grid);
int		ft_check_col_top(t_grid *grid);
int		ft_check_col_bottom(t_grid *grid);
int		ft_check_row_left(t_grid *grid);
int		ft_check_row_right(t_grid *grid);
int		ft_counter_row_left(t_grid *grid, int row);
int		ft_counter_row_right(t_grid *grid, int row);
int		ft_counter_col_top(t_grid *grid, int col);
int		ft_counter_col_bottom(t_grid *grid, int col);
void	ft_print_grid(t_grid *grid);

#endif