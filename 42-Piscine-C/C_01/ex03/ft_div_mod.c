#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int main()
{
	int a = 65;
	int b = 10;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	return 0;
}
