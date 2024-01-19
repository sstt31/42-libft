

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}

/* int main()
{
	char a = 'A';
	int b = ft_tolower(a);
	printf("%d" , b);
}  */