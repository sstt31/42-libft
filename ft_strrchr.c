/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:39:05 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/19 17:05:24 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ch;

	i = ft_strlen(str);
	ch = c;
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}

/* int	main()
{
	char	*str = "ruthbadatkh";
	char	to_find = 't';

	printf("%s\n", ft_strrchr(str, to_find));
}
 //gcc ft_strrchr.o -L. libft.a -o new */