/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:03:57 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/25 20:04:46 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

// lst: beginning of the list.

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "Hello";
// 	t_list *node = ft_lstsize(str);

// 	printf("Length: %s\n", (char *)node->content);
// }

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

// 	printf("List size: %d\n", ft_lstsize(head));
// }