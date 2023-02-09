#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 6;
	int b = 9;
	ft_swap(&a, &b);
	return 0;
}
