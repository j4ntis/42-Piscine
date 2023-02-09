#include <stdio.h>
#include <unistd.h>



void ft_ultimate_div_mod(int *a, int *b)
{
	int temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int main()
{
	int a = 6;
	int b = 9;
	ft_ultimate_div_mod(&a, &b);
	return 0;
}
