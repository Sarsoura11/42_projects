/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:13:46 by sahamad           #+#    #+#             */
/*   Updated: 2025/12/02 15:09:05 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node->content = (*f)(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// void *change_str(void *str)
// {
// 	char *string;
// 	int i;

// 	string = (char *)str;
// 	i = 0;
// 	while(string[i])
// 	{
// 		if (string[i] == ' ')
// 			string[i] = '-';
// 		i++;
// 	}
// }

// void *del(void *node)
// {
// 	if(node)
// 		free(node);
// }