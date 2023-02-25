#include <unistd.h>

void print_char(char cr)
{
	write(1, &cr, 1);
}

int repeat_times(char x)
{
	if(x >='a' && x <= 'z')
		return x - 'a' + 1;
	if(x >='A' && x <= 'Z')
		return x - 'A' + 1;
	return 1;
}

int main(int ac, char **av)
{
	char *str = av[1];
	int i = 0;
	int times;
	if(ac == 2)
	{
		while (str[i])
		{
			times = repeat_times(str[i]);
			while (times)
			{
				print_char(str[i]);
				times--;
			}
			i++;
		}
	}
	print_char('\n');
	return 0;
}
