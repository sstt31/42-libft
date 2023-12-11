/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:21:33 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/19 17:37:23 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_lenth;

	src_lenth = 0;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[src_lenth])
		src_lenth++;
	return (src_lenth);
}

/* int main() {
    char source[] = "This is a test string.";
    char destination[20];
    size_t buffer_size = 10;

    size_t copied_length = ft_strlcpy(destination, source, buffer_size);

    printf("Copied string: %s\n", destination);
    printf("Length of source string: %zu\n", copied_length);

    return 0;
}  */