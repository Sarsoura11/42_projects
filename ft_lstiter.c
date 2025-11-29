/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:12:17 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/29 15:59:59 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst-> next;
	}
}

// void change_cap(void *str)
// {
// 	char *string;
// 	int i;

// 	string = str;
// 	i = 0;
// 	while(string[i])
// 	{
// 		if(string[i] >= 'A' && string[i] <= 'Z')
// 			string[i] += 32;
// 		i++;
// 	}
// }

// #include <stdio.h>

// int main(void)
// {
// 	t_list *node;
// 	char word[] = "HELLO";

// 	node = ft_lstnew(word);
// 	ft_lstiter(node, change_cap);

// 	while(node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}
// 	return (0);
// }