

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}

/* int main()
{
	int a = a;
	int b = ft_isascii(a);
	printf("%d" , b);
} */