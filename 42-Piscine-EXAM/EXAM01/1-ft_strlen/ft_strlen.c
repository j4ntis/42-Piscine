int    ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}
/*#include <stdio.h>
int main()
{
    char name[] = "Kerem";
    int res = ft_strlen(name);
    printf("%d", res);
    return 0;
}*/
