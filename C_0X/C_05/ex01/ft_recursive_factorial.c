int ft_recursive_factorial(int nb)
{
	if(nb>1)
		nb = nb * ft_recursive_factorial(nb - 1);
	else
		return 1;
	return nb;
}

#include <stdio.h>
int main()
{
	int a = ft_recursive_factorial(5);
	printf("%d", a);
}
