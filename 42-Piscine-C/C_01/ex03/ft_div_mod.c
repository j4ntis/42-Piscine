/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:58:11 by kisik             #+#    #+#             */
/*   Updated: 2023/02/10 19:10:07 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
int main()
{
	int a = 3;
	int b= 5;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d", a, b, div, mod);
	return 0;
}
