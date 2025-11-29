/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:13:46 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/29 17:46:07 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	size_t lst_len;
	if (!lst || !f || !del)
		return (NULL);

	lst_len = ft_lstsize(lst);
	new_lst = malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	
	while(lst != NULL)
	{
		new_lst = f(lst->content);
		new_lst = lst ->next;
	}

	if (lst->content != NULL)
	del(lst->content);
	free(lst);
	
}
void *change_str(void *str)
{
	char *string;
	int i;

	string = (char *)str;
	i = 0;
	while(string[i])
	{
		if (string[i] == ' ')
			string[i] = '-';
		i++;
	}
}

void *del(void *node)
{
	if(node)
		free(node);
}