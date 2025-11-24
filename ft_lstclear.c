#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = next;
	}
}

// static void	ft_clear(void *node)
// {
// 	if (node)
// 		free(node);
// }
// the address of a pointer to a node.
// address of the function used to delete the content of the node.