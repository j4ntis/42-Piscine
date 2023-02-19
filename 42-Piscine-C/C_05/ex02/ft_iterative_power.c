int ft_iterative_power(int nb, int power)
{
	if(nb < 0)
		return 0;
	int total = 1;
	while (power)
	{
		total *= nb;
		power--;
	}
	return total;
}
#include <stdio.h>
int main()
{
	int res = ft_iterative_power(-3, 3);
	printf("%d", res);
}
