

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}

/* #include <stdio.h>

void convert_to_uppercase(unsigned int index, char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32; 
    }
}
int main() {
    char str[] = "Hello, World!";
    
    printf("Original String: %s\n", str);

    ft_striteri(str, &convert_to_uppercase);
    printf("Original String: %s\n", str);
    return 0;
}
 */