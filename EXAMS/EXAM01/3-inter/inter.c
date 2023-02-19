#include <unistd.h>

int checkDoubles(char *str, char c, int pos)
{
    int k = 0;
    while (k < pos)
    {
        if(str[k] == c)
            return 0;
        k++;
    }
    return 1;
}
void inter(char *str1,char *str2)
{
    int i = 0;
    while (str1[i])
    {
        int j = 0;
        while (str2[j])
        {
            if (str1[i] == str2[j] && checkDoubles(str1, str1[i], i))
            {
                write(1, str1+i, 1);
                break;
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
    return 0;
}
