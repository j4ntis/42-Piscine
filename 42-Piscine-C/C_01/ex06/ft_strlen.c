#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}

int main()
{
	char name[] = "Kerem";
	int result = ft_strlen(name);
	printf("%d", result);
	return 0;
}
