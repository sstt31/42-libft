

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/* int main()
 {
	int fd= 1; 
	char *myString = "Hello, World!";

	ft_putstr_fd(myString, fd);

	return 0;
} */