#include <unistd.h>

void printString(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, str+i, 1);
		i++;
	}
}

void changeLetters(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'y' || str[i] >= 'A' && str[i] <= 'Y')
			str[i] += 1;
		else if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		changeLetters(av[1]);
		printString(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
