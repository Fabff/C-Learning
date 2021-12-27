#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int swapped = 1;
    int j;
    int lastSwapped;

    lastSwapped = size;
    while (swapped)
    {
        swapped = 0;
        j = 0;
        while (j < lastSwapped)
        {
            if (tab[j+1]<tab[j])
            {       
                ft_swap(&tab[j], &tab[j+1]);
                swapped = j+1;
            }
            j++;
        }
        lastSwapped = swapped;
    }
}

int		main(void)
{
	int c[5] = {55,-10,59,0,54};
	ft_sort_int_tab(c, 5);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d \n", c[0], c[1], c[2], c[3], c[4]);
}