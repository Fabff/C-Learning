#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tamp = *a;
    *a = *b;
    *b = tamp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int changed = 0;

    while (i < (size-1))
    {
        changed = 0;
        if (tab[i] > tab[i+1] && i < size-1)
        {
            ft_swap(&tab[i], &tab[i+1]);
            changed = 1;
        }
        
        if (changed == 1)
            i = 0;
        else
            i++;
    }
}

int		main(void)
{
	int c[9] = {55,-10,59,0,54,-100,700,56,-578};
	ft_sort_int_tab(c, 9);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d ", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8]);
}