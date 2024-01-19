

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