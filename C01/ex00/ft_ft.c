#include <unistd.h>

 void   ft_ft(int *nbr)
 {
     *nbr = 42;
 }

 int		main(void)
{
	int a = 3;
	ft_ft(&a);
	if (a == 42)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}