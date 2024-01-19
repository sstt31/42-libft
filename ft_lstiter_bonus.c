

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pos;

	if (!lst)
		return ;
	pos = lst;
	while (pos)
	{
		f(pos ->content);
		pos = pos ->next;
	}
}

/* void print_content(void *content) 
{
    printf("%s\n", (char *)content);
}

int main() {
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->content = "Apple";
    node1->next = node2;

    node2->content = "Banana";
    node2->next = node3;

    node3->content = "Cherry";
    node3->next = NULL;

    ft_lstiter(node1, &print_content);

    free(node1);
    free(node2);
    free(node3);

    return 0;
} */