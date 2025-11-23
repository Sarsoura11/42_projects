#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!lst || !new)
		return ;

	new->next = *lst;
	*lst = new;
}

// lst: address of a pointer to the first node of a list.
// new: address of a pointer to the node to be added.

// make new->next
// update the head pointer to the new node

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

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);

// 	t_list *test = head;

// 	while (test)
// 	{
// 		printf("%s\n", (char *)test->content);
// 		test = test->next;
// 	}
// }