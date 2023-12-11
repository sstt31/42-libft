/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:32:25 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/22 13:33:10 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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