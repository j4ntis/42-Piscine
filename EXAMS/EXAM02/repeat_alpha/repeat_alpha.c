#include <unistd.h>

int		letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int ac, char **av)
{
	int	repeat;
	char* str = av[1];
	int i;
	if (ac == 2)
	{
		i = 0;
		while (str[i])
		{
			repeat = letter_count(str[i]);
			while (repeat--)
				write(1, str+i, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
