#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return NULL;

	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// lst: address of a pointer to the first node of a list.
// new: addres of a pointer to the node to be added.
#include <stdio.h>

int main(void)
{
	t_list *head = NULL;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew("words");
	node2 = ft_lstnew("3");
	node3 = ft_lstnew("List");

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);

	t_list *result = ft_lstlast(head);

	printf("%s\n", (char *)result->content);
	return (0);
}

