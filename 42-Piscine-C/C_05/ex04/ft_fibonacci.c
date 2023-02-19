#include <stdio.h>
int ft_fibonacci(int index)
{
	if(!index)
		return 1;
	return (0 + 1 + ft_fibonacci(index--));

}

int main()
{
    int res = ft_fibonacci(5);
	printf("\n\n\n%d", res);
}
