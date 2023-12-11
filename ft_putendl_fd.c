/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:56:43 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/21 10:48:35 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		write(fd, s + i, 1);
		i++;
	}
	write(fd, "\n", 1);
}
/* int main()
 {
	int fileDescriptor = 1; 
	char *myString = "Hello, World!";

	ft_putendl_fd(myString, fileDescriptor); 

	return 0;
} */