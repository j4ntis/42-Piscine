#include <unistd.h>
#include <stdio.h>

void  ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int nbr = 0;
	int *pNbr = &nbr;
	printf("Before: %d\n", nbr);
	ft_ft(pNbr);
	printf("After: %d\n", nbr);
	return 0;
}
