/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:04:46 by kisik             #+#    #+#             */
/*   Updated: 2023/02/15 19:04:49 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	b = 0;
	i = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[b] == str[i + b] && (str[i + b] != '\0'))
			b++;
		if (to_find[b] == '\0')
			return (str + i);
		i++;
		b = 0;
	}
	return (0);
}
