/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:38:29 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/22 13:36:44 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	char	*srccpy;
	size_t	i;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (destcpy);
}

/* int	main()
{
	char	*src = "Hello World";
	char	*dest[15];
	char	*ptr = ft_memcpy(dest, src, 5);

	printf("%s\n", ptr);
}  */