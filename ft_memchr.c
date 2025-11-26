/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:41:44 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/25 19:41:46 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			len;

	len = 0;
	str = (unsigned char *)s;
	while (len < n)
	{
		if (str[len] == (unsigned char)c)
			return ((unsigned char *)&str[len]);
		len++;
	}
	return (NULL);
}
