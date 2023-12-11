/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:49:22 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/25 14:58:41 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next)
		lst = lst ->next;
	return (lst);
}

/* typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;

#include <stdio.h> 
#include <stddef.h>
#include <stdio.h> 

// Function to create a new node with given content
t_list *create_node(int data)
 {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node) {
        new_node->content = data;
        new_node->next = NULL;
    }
    return new_node;
}

int main() 
{
    // Create nodes for a linked list (Example)
    t_list *node1 = create_node(10);
    t_list *node2 = create_node(40);
  
   // Creating a linked list: node1 -> node2 -> node3 -> node4
    node1->next = node2;
    node2->next = NULL; 
    
   // Find the last node of the linked list
    t_list *last_node = ft_lstlast(node1); // Pass the head pointer of the list

    if (last_node != NULL) 
    {
        printf("Value of the last node: %d\n", (int)last_node->content);
    } else {
        printf("The linked list is empty.\n");
    }

    // Free allocated memory for the nodes (assuming dynamic allocation)
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
} */