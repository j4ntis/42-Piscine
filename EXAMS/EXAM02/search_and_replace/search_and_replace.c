#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}
void ft_editstr(char *str, char letr1, char letr2)
{
	int i = 0;
	while (str[i])
	{
		if(str[i] == letr1)
			str[i] = letr2;
		i++;
	}

}
int main(int ac, char **av)
{
        if ( ac == 4
			&& av[2][0] && !av[2][1]
			&& av[3][0] && !av[3][1])
	{
		char *str = av[1];
		char letr1 = av[2][0];
		char letr2 = av[3][0];
		if (letr1 == letr2)
			ft_putstr(str);
		else
		{
			ft_editstr(str, letr1, letr2);
			ft_putstr(str);
		}
	}
	write(1, "\n", 1);
	return 0;
}
//"Papache est un sabre" "a" "o" 
