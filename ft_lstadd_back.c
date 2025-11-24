#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	while (*lst)
	{
		lst = &(*lst)->next;
	}
	new->next = NULL;
	*lst = new;
}

// address of a pointer to the first node of a list.
// address of a pointer to the node to be addes.

// #include <stdio.h>

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1 = ft_lstnew("words");
// 	node2 = ft_lstnew("3");
// 	node3 = ft_lstnew("List");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);

// 	t_list *result = head;

// 	while (result)
// 	{
// 		printf("%s\n", (char *)result->content);
// 		result = result->next;
// 	}
// }