#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_puthex(char c)
{  
    char *base = "0123456789abcdef";

    ft_putchar(base[c/16]);
    ft_putchar(base[c%16]); 
}

void ft_putstr_non_printable(char *str)
{
    int i = 0;

    while(str[i])
    {
        if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
        {
            ft_putchar('\\');
            ft_puthex(str[i]);
        }
        else
            ft_putchar(str[i]);
        i++;
    }
}



void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ?:");
	ft_putstr_non_printable(c);
	char d[] = "\x81\xbe";
	ft_putstr("\n\\81\\be:");
	ft_putstr_non_printable(d);
}