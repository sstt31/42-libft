
#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}

/* int main() {
    
    char testChar = 'a';

    int b =ft_isalnum(testChar);
        printf("%d\n", b);


    return 0;
} */
