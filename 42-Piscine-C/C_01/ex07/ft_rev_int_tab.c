#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	if(*tab <= size)
	{
		tab++;
	}
	ft_rev_int_tab(tab, size);
	write(1, tab, 1);
}

int main()
{
	int name[5] = {1, 2, 3, 4, 5};
	int a;
	ft_rev_int_tab(&name[0], 5);
	return 0;
}
