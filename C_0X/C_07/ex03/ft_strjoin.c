/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:03:09 by kisik             #+#    #+#             */
/*   Updated: 2023/02/26 17:29:54 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_of_strs(int size, char **strs)
{
	int	index_str;
	int	index_char;
	int	total_char;

	total_char = 0;
	index_str = 0;
	while (index_str < size)
	{
		index_char = 0;
		while (strs[index_str][index_char])
			index_char++;
		total_char += index_char;
		index_str++;
	}
	return (total_char);
}

int	size_of_seps(int size, char *sep)
{
	int	size_sep;

	size_sep = 0;
	while (sep[size_sep])
	{
		size_sep++;
	}
	return (size_sep * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index_str;
	int		index_char;
	int		index_join;
	int		size_chars;
	char	*join;

	size_chars = size_of_strs(size, strs);
	join = malloc(sizeof(char) * (size_chars + size_of_seps(size, sep) + 1));
	if (join == NULL)
		return (0);
	index_str = 0;
	index_join = 0;
	while (index_str < size)
	{
		index_char = 0;
		while (strs[index_str][index_char])
			join[index_join++] = strs[index_str][index_char++];
		index_char = 0;
		while (sep[index_char] && index_str < size - 1)
			join[index_join++] = sep[index_char++];
		index_str++;
	}
	join[index_join] = '\0';
	return (join);
}
