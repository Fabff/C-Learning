#include <unistd.h>

void	ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int		main(void)
{
	int a = 3;
	int b = 18;
	ft_swap(&a, &b);
	if (b == 3 && a == 18)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
