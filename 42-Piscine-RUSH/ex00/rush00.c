/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:28:43 by kisik             #+#    #+#             */
/*   Updated: 2023/02/05 02:08:43 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

int	rush( int satir, int sutun)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < sutun)
	{
		while (x < satir)
		{
			ft_putchar(satir, sutun, x, y);
			x++;
		}
		write(1, "\n", 1);
		x = 0;
		y++;
	}
	return (0);
}
