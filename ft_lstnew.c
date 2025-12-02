/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:27:42 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/12/02 14:05:23 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
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