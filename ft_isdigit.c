

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int main()
{
	int a = 'l';
	int b = ft_isdigit(a);
	printf("%d" , b);
} */