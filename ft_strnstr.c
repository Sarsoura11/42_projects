/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:30:13 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/25 18:30:26 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	size_t	i;
	size_t	j;

	hay = (char *)haystack;
	i = 0;
	j = 0;
	if (needle[j] == 0)
		return (hay);
	i = 0;
	while (hay[i] != 0)
	{
		j = 0;
		while (i + j < len && needle[j] != 0 && hay[i + j] == needle[j])
			j++;
		if (needle[j] == 0)
			return (hay + i);
		i++;
	}
	return (NULL);
}

// while (hay[i] != 0 && needle[j] < len && printf("needle "))
	// hay[] = "hello world"
	// needle[] = "world";