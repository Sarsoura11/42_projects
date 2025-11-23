#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	if(!(new_node = malloc(sizeof(t_list))))
		return (NULL);

	new_node-> content = content;
	new_node-> next = NULL;

	return(new_node);
}

// allocates memory for the new node
// stores the content inside our 'new_node'
// sets next = NULL
// returns a pointer to the 'new_node'

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "Hello";
// 	t_list *node = ft_lstnew(str);

// 	printf("Content: %s\n", (char *)node->content);
// 	printf("Next: %p\n", node->next);
// }