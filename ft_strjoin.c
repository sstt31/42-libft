/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:26:23 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/22 19:31:10 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

/* int main() 
{
    char s1[] = "lorem ipsum";
    char s2[] = "dolor sit amet";
    char *strjoin;

    strjoin = ft_strjoin(s1, s2);
    if (strjoin == NULL)
        printf("NULL\n");
    else {
        printf("%s\n", strjoin);
        free(strjoin); 
    }

    return 0;
}  */
