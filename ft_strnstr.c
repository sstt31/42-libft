/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:58:04 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/22 15:46:16 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j] && little[j] == big[i + j]) && (i + j < len))
		{
			if (little[j + 1] == 0)
				return ((char *)(&big[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int main() {
    const char *haystack = "Hello, this is a test string";
    const char *needle = "is";

    char *result = ft_strnstr(haystack, needle, 20); 
        printf("'%s' found at position: %ld\n", needle, result - haystack);

    return 0;
} */