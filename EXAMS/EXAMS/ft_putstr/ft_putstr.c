#include <unistd.h>

int lenOf(char *str)
{
	int len = 0;
	while(str[len])len++;
	return len;
}

void ft_putstr(char *str)
{
	write(1, str, lenOf(str));
}
