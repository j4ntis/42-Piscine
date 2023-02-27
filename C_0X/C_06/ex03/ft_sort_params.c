/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:32:25 by kisik             #+#    #+#             */
/*   Updated: 2023/02/23 17:16:18 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap_str(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_print_params(char **strs)
{
	int	i;

	i = 1;
	while (strs[i])
	{
		ft_putstr(strs[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i + 1 < ac)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap_str(&av[i], &av[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	ft_print_params(av);
	return (0);
}
