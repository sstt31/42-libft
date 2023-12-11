/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:08:40 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/18 13:48:25 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(count * size);
	if (!p)
		return (0);
	ft_bzero (p, count * size);
	return (p);
}

/* int main() {
	size_t count = 10; // Number of elements
	size_t size = sizeof(int); // Size of each element (assuming int)
	printf("Memory allocation before.\n");
	int *arr = ft_calloc(count, size); // Allocate memory for an array of integers

	if (arr != NULL) 
	{
		// Successfully allocated memory
		printf("Memory allocation successful.\n");
		free(arr);
	} else 
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
 */