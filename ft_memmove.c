

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destmov;
	char	*srcmov;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	destmov = (char *)dest;
	srcmov = (char *)src;
	i = 0;
	if (destmov > srcmov)
		while (n--)
			destmov[n] = srcmov[n];
	else
	{
		while (n--)
		{
			destmov[i] = srcmov[i];
			i++;
		}
	}
	return (destmov);
}

/* int	main()
{
	char	src[] = "heill";
	char	dest[] = "hsadd";
	size_t len = strlen(src);

	char *p = ft_memmove(dest, src, len);

	printf("result: %s\n", p);
	char	expected[] = "shub";
	memmove(expected, src, len);
	printf("expected: %s\n", expected);

	return 0;
} */