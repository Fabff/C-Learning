#include <stdio.h>
#include <unistd.h>


void ft_swap(int *a, int *b)
{
    int tamp = *a;
    *a = *b;
    *b = tamp;
}

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int j = (size-1);

    while (i < (size/2))
    {
        ft_swap(&tab[i], &tab[j]);
        i++;
        j--;
    }
}


int		main(void)
{
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("before : %d,%d,%d,%d,%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
    printf("\n");
	ft_rev_int_tab(tab, 10);
    printf("after : %d,%d,%d,%d,%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);

    return 0; 
}