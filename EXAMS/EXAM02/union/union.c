#include <unistd.h>

int checkDouble(char *str, int i)
{
    int j = 0;
    while(j < i)
    {
        if(str[i] == str[j])
            return 1;
        j++;
    }
    return 0;
}

void double_char(char *str)
{
    int i = 0;
    while (str[i])
    {
        if(!checkDouble(str, i))
            write(1, str+i, 1);
        i++;
    }
}

void ft_strcat(char *dst, char *src)
{
	int len = 0;
	while(dst[len]){len++;}
	int j = 0;
	while (src[j])
	{
		dst[len+j] = src[j];
		j++;
	}
	dst[len+j] = '\0';
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		char *str = av[1];
		char *str2 = av[2];
		ft_strcat(av[1], av[2]);
		double_char(str);
	}
	write(1, "\n", 1);
}
/*
int main()
{
    char *str = "ddf6vewg64fgtwthgdwthdwfteewhrtag6h4ffdhsd";
    double_char(str);
    return 0;
}
*/
