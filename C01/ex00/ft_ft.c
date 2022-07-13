#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int nbr = 13;

    printf("before : %d\n", nbr);
    ft_ft(&nbr);
    printf("after : %d\n", nbr);
    return 0;
}