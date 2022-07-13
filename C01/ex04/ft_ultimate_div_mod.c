#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int tamp = *a;
    *a = *a / *b;
    *b = tamp % *b;
}

int main()
{
    int a = 10;
    int b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}