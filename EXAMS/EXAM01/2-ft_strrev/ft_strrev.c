int    ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char    *ft_strrev(char *str)
{
    int i = 0;
    int lenStr = ft_strlen(str);
    int lastIndex = lenStr - 1;
    while (i < (lenStr/2))
    {
        char tmp = str[i];
        str[i] = str[lastIndex - i];
        str[lastIndex - i] = tmp;
        i++;
    }
    return str;
}
