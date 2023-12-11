/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:21:13 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/25 14:59:13 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst ->content);
	free(lst);
}

/* void deleteContent(void *data)
{
    free(data);
}

int main() 
{
    // Create a linked list node with dummy data
    int *data = (int *)malloc(sizeof(int));
    *data = 42;

    // Create a linked list node
    t_list *node = (t_list *)malloc(sizeof(t_list));
    node->content = data;
    node->next = NULL;
    printf("Before deletion, data: %d\n", *((int *)node->content));
    ft_lstdelone(node, deleteContent); // Delete the node
    return 0;
} */