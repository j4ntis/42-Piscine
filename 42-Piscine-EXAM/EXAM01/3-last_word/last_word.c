#include <unistd.h>

#define SPACE 32//                 whitespaces in [0:32]
//                                 main-> printLastWord-> ft_strlen -> ft_putchar
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
void printLastWord(char *str)
{
    int i = ft_strlen(str) - 1;
    while (str[i] <= SPACE)    // remove ws's from ending
        i--;
    while (str[i] > SPACE)    // to go first index of lastword
        i--;
    i++;
    while (str[i] > SPACE)    // to print last word
    {
        ft_putchar(str[i]);
        i++;
    }
}
/*
int main(int ac, char **av)
{
    if (ac == 2)// if there is only one str
    {
        printLastWord(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}*/
