/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:38:49 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/25 18:38:51 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst->content != NULL)
		del(lst->content);
	free(lst);
}

// static void	*ft_del(void *node)
// {
// 	if (node)
// 		free(node);
// }

// the node to free
// the address of the function used to delete the content.
