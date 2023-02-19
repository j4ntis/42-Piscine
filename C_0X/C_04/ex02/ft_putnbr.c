/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:49:54 by kisik             #+#    #+#             */
/*   Updated: 2023/02/17 13:05:42 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char chr)
{
	write(1, &chr, 1);
}

void	ft_putnbr(int numb)
{
	if (numb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		numb = 147483648;
	}
	if (numb < 0)
	{
		ft_putchar('-');
		numb *= -1;
	}
	if (numb >= 10)
	{
		ft_putnbr(numb / 10);
		ft_putnbr(numb % 10);
	}
	else
		ft_putchar(numb + '0');
}
