#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int t;
	t = *a / *b;
	*b = *a % *b;
	*a = t;
}

int main()
{
	int a;
	int b;
	a = 11;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	return 0;
}
