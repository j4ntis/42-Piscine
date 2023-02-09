#include <unistd.h>
#include <stdio.h>


void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j;
    int min = tab[0];
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if(tab[i] > tab[j])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}
int main()
{
    int tab[] = {5, 4, 3, 2, 1};
    int size = 5;
    ft_sort_int_tab(tab, size);
    return 0;
}
