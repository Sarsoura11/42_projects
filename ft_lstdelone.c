#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst->content != NULL)
		del(lst->content);
	free(lst);
}

static void	*ft_del(void *node)
{
	if (node)
		free(node);
}

// the node to free
// the address of the function used to delete the content.
