#include <unistd.h>

int main(int ac, char** av)
{
	char* str = av[0];
	int i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
