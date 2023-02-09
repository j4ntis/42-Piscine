#include <unistd.h>
#include <stdio.h>
void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main()
{
	int nbr;
	int *nbr;
	int **nbr;
	int ***nbr;
	int ****nbr;
	int *****nbr;
	int ******nbr;
	int *******nbr;
	int ********nbr;
	int *********nbr;
	nbr = 61;
	printf("%d", nbr);
	ft_ultimate_ft(nbr);
	printf("%d", nbr);
	return 0;
}
