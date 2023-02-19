#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

/*
int main()
{
	int a = 2;
	int b = 3;
	ft_swap(&a, &b);
	return 0;
}
*/
