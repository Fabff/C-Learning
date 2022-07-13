#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 42;
    int b = 24;
    printf("before : a=%d, b=%d\n", a, b);
    ft_swap(&a, &b);
    printf("after : a=%d, b=%d\n", a, b);
    return 0;
}