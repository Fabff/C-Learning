char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (dest[i])
    {
        dest[i] = src[i];
        i = i + 1;
    }
    return dest;
}

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):\n%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strcpy(dest1, src1);
}