/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:28:30 by kisik             #+#    #+#             */
/*   Updated: 2023/02/05 03:27:33 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int satir, int sutun, int x, int y)
{
	if ((x == 0 && (y == 0  || y == sutun - 1)))
	{
		write(1, "o", 1);
	}
	else if ((x == satir - 1 && (y == sutun - 1 || y == 0)))
	{
		write(1, "o", 1);
	}
	else if (x == 0 || x == satir -1)
	{
		write(1, "|", 1);
	}
	else if (y == 0 || y == sutun - 1)
	{
		write(1, "-", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
