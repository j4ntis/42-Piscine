#include <unistd.h>

void printStr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, str+i, 1);
		i++;
	}
}
int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return 0;
}
int len(char *str1)
{
	int len = 0;
	while(str1[len]){len++;}
	return len;
}

void eq(char *str1, char *str2, int lenStr1)
{
	char result[lenStr1 + 1];
	int i = 0;
	int j = 0;
	while (str1[j])
	{
		while (str2[i])
		{
			if (str1[j] == str2[i])
			{
				result[j] = str1[j];
				break;
			}
			i++;
		}
		j++;
	}
	result[j] = '\0';
	if (!ft_strcmp(result, str1))
		printStr(result);
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		eq(av[1], av[2], len(av[1]));
	}
	write(1, "\n", 1);
	return 0;
}
