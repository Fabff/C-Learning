#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
    int c;

    c = *a / *b;
    *b = *a % *b;
    *a = c;

}

int		main(void)
{
	int a;
	int b;

	a = 16;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	if (a == 3 && b == 1)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}