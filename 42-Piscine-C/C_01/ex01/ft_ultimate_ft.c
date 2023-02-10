/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:55:02 by kisik             #+#    #+#             */
/*   Updated: 2023/02/10 15:56:11 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int        main (void)
{
    int *********nbr1;
    int ********nbr2;
    int *******nbr3;
    int ******nbr4;
    int *****nbr5;
    int ****nbr6;
    int ***nbr7;
    int **nbr8;
    int *nbr9;
    int x;

    x = 69;
    nbr9 = &x;
    nbr8 = &nbr9;
    nbr7 = &nbr8;
    nbr6 = &nbr7;
    nbr5 = &nbr6;
    nbr4 = &nbr5;
    nbr3 = &nbr4;
    nbr2 = &nbr3;
    nbr1 = &nbr2;

    printf("%d\n", x);
    ft_ultimate_ft(nbr1);
    printf("%d\n", x);
    return (0);
}
