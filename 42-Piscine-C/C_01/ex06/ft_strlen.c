#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str)
{
	int len;
	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return len;
}

int main()
{
	char name[5] = {"kerem"};
	int a;
	a = ft_strlen(&name[0]);
	printf("%d", a);
	return 0;
}
