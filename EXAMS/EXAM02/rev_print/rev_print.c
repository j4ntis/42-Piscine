#include <unistd.h>
int main(int ac, char **av)
{
	if(ac == 2)
	{
		char *str = av[1];
		int len = 0;
		while (str[len])
			len++;
		while (len--)
			write(1, str + len, 1);
	}
	write(1, "\n", 1);
}
