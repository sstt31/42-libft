/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:46:28 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/19 14:58:50 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	const unsigned char	*str;

	ch = c;
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

/* #include <string.h>

int main() {
    const char *str = "Hello, World!";
    size_t str_length = 13;  

    void *found = memchr(str, 'W', str_length);

    if (found != NULL) {
        printf(" found at position: %ld\n", (char *)found - str);
    } else {
        printf("Character 'W' not found in the memory block.\n");
    }

    return 0;
}
 */