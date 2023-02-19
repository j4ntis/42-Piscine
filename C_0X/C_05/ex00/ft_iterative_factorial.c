int ft_iterative_factorial(int nb)
{
	int i = 1;
	int fac = 1;
	while (i <= nb)
	{
		fac*=i;
		i++;
	}
	return fac;
}

#include <stdio.h>
int main()
{
	int a = ft_iterative_factorial(5);
	printf("%d", a);
}
