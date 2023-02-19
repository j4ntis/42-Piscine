#include <unistd.h>

#define SPACE 32

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    char *str = av[1];
    if (ac == 2)
    {
        while (  str[i] <= SPACE && str[i])
            i++;
        while ( str[i] > SPACE && str[i])
        {
            ft_putchar(str[i]);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
