
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
	{
		return (0);
	}
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/* int main()
{
	char *str = "Hello";
	t_list *ptr = ft_lstnew((void *)str);
	printf("%s", (char *)ptr -> content);
	return (0);
} */