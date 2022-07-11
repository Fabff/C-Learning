#include <unistd.h>

void ft_print_numbers(void)
{
    char number = 48;
    while (number <= 57)
    {
        write(1, &number,1);
        number += 1;
    }
}

int main()
{
    ft_print_numbers();
    write(1, "\n", 1);
    return 0;
}