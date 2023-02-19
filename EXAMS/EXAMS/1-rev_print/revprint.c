char *ft_rev_print(char *str)//
{
    int i = ft_strlen(str);
    while (i >= 0)
    {
        write(1, (str + i), 1);
        i--;
    }
    return str;
}

int    ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

/*
int main(int ac, char **av)
{
    char *str = av[1];
    ft_rev_print(str);
    return 0;
}
*/
