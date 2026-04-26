/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gval-fra <gval-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:39:08 by gval-fra          #+#    #+#             */
/*   Updated: 2026/04/16 11:27:34 by gval-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int n)
{
	char	c;

	c = '0' + (n / 10);
	write(1, &c, 1);
	c = '0' + (n % 10);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_int (a);
			write(1, " ", 1);
			ft_print_int(b);
			if (!(a == 98 && b == 99))
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2 ();
	return (0);
}
*/