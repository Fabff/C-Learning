#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int num3 = 0;
    int num2 = 0;
    int num1 = -1;

    while (num1 < 7)
    {
        num1++;
        num2 = num1;
        while(num2 < 8)
        {
            num2++;
            num3 = num2;
            while (num3 < 9)
            {
                num3++;
                ft_putchar(num1+'0');
                ft_putchar(num2+'0');
                ft_putchar(num3+'0');
                if (!(num1 == 7 && num2 == 8 && num3 == 9))
                {
                    write(1, ", ", 2);
                }
            }
        }
    }
}

int main()
{
    ft_print_comb();
    write(1, "\n", 1);
    return 0;
}
