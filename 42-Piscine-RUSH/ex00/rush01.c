/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:41:40 by kisik             #+#    #+#             */
/*   Updated: 2023/02/09 15:43:51 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	rush(int x, int y)

{
	int	stn;
	int	str;

	str = 1;
	while (x > 0 && y > 0 && str <= y)
	{
		stn = 1;
		while (stn <= x)
		{
			if (str == 1 && stn == 1)
				ft_putchar('/');
			else if ((str == 1 && stn == x) || (str == y && stn == 1))
				ft_putchar('\\');
			else if (str == y && stn == x)
				ft_putchar('/');
			else if (str == 1 || str == y || stn == 1 || stn == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			stn++;
		}
		ft_putchar('\n');
		str++;
	}
}
