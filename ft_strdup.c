

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	i;
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	new = (char *) malloc ((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

/* int main()
{
	printf("%s",ft_strdup("hellow"));
	return (0);
} */