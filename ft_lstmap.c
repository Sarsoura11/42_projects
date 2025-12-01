/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:13:46 by sahamad           #+#    #+#             */
/*   Updated: 2025/12/01 22:16:50 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_list;
// 	t_list	*new_node;
// 	void	*new_content;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	new_list = NULL;
// 	while (lst != NULL)
// 	{
// 		new_node = (ft_lstnew(new_content));
// 		new_content = f(lst->content);
// 		if (!new_node || new_content != NULL)
// 		{
// 			del(new_content);
// 			ft_lstclear(&new_list, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&new_list, new_node);
// 		lst = lst->next;
// 	}
// 	return (new_list);
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;
	void *new_content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while(lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if(!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*change_str(void *str)
// {
// 	char	*string;
// 	int		i;

// 	string = (char *)str;
// 	i = 0;
// 	while (string[i])
// 	{
// 		if (string[i] == ' ')
// 			string[i] = '-';
// 		i++;
// 	}
// }

// void	*del(void *node)
// {
// 	if (node)
// 		free(node);
// }
