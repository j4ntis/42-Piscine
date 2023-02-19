#include <stdlib.h>
char *ft_strdup(char *s1)
{
    int len = 0;
    while(s1[len]){len++;}

    char *s2 = malloc(sizeof(char) * (len+1));
    int i = 0;
    while (i<=len)
    {
        s2[i] = s1[i];
        i++;
    }
    return s2;
}
/*
#include <stdio.h>
int main()
{
    char a[] = "example";
    printf("%s", ft_strdup(a));
}
*/ 

