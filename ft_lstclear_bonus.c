

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*head;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head)
	{
		tmp = head->next;
		del(head->content);
		free(head);
		head = tmp;
	}
	*lst = NULL;
}

/* void delete_content(void *content)
{
    free(content);
}

int main()
{
    t_list *head = NULL;

    // Creating nodes
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    char *content1 = "Apple";
    char *content2 = "Banana";
    char *content3 = "Cherry";
	
    node1->content = content1;
    node1->next = node2;

    node2->content = content2;
    node2->next = node3;

    node3->content = content3;
    node3->next = NULL;

    head = node1;
r
    ft_lstclear(&head, &delete_content);

    return 0;
}
 */