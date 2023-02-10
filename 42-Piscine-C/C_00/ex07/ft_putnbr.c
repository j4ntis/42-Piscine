/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:33:59 by kisik             #+#    #+#             */
/*   Updated: 2023/02/06 15:57:08 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ax)
{
	write(1, &ax, 1);
}	

void	ft_putnbr(int nmb)
{
	if (nmb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nmb < 0)
	{
		ft_putchar ('-');
		nmb = -nmb;
		ft_putnbr(nmb);
	}
	else if (nmb > 9)
	{
		ft_putnbr(nmb / 10);
		ft_putnbr(nmb % 10);
	}
	else
		ft_putchar(nmb + 48);
}
