/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:44:31 by kisik             #+#    #+#             */
/*   Updated: 2023/02/17 15:41:45 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	numb;
	int	negative;

	index = 0;
	numb = 0;
	negative = 1;
	while (str[index] <= 32)
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		numb *= 10;
		numb += (str[index] - '0');
		index++;
	}
	return (numb * negative);
}
