/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:15:40 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/21 13:09:51 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_alct(int len)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

static void	ft_str(char *str, int n, int ng)
{
	int	len;

	len = ft_len(n);
	if (n == 0)
		str[0] = '0';
	else if (ng)
	{
		str[0] = '-';
		while (n != 0)
		{
			str[--len] = '0' - (n % 10);
			n /= 10;
		}
	}
	else
	{
		while (n != 0)
		{
			str[--len] = '0' + (n % 10);
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	int		ng;
	int		len;
	char	*str;

	if (n < 0)
		ng = 1;
	else
		ng = 0;
	len = ft_len(n);
	str = ft_alct(len);
	if (!str)
		return (NULL);
	ft_str(str, n, ng);
	return (str);
}

/* int main()
 {
	int number = 1234;
	char *str = ft_itoa(number);

		printf("Integer: %d\nString: %s\n", number, str);
	return 0;
 }  */