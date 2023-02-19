int ft_recursive_power(int nb, int power)
{
    if (nb < 0)//	 negatif olma durumu
        return 0;
	if (!power)//	 0 olma durumu
		return 1;
    if (power == 1)// 1 olma durumu
		return nb;
    return nb * ft_recursive_power(nb, power - 1);//standart
}

#include <stdio.h>
int main()
{
    int res = ft_recursive_power(0, 0);
    printf("%d", res);
}
