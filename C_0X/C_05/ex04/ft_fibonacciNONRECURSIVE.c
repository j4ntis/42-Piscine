#include <stdio.h>
int ft_fibonacci(int index)
{
    int a = 0;
    int b = 1;
    int temp;
	printf("%d %d ", a, b);
    while (index)
    {
        temp = a + b;
        b = b + temp;
        a = temp;
		printf("%d %d ", a, b);
        index--;
    }
	return b;

}
int main()
{
    int res = ft_fibonacci(5);
	printf("\n\n%d", res);
}
