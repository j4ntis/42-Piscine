#include <stdio.h>
#include <unistd.h>


void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	while (i < (size/2))
	{
		int temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}

}


int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(tab, size);
	return 0;
}
