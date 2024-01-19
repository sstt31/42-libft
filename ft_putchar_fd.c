

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main() {
	char myChar = 'c';
	int fileDescriptor = 1;

	ft_putchar_fd(myChar, fileDescriptor); 

	return 0;
} */