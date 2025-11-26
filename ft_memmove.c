/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:56:39 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/25 18:56:41 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				l;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (d == s || len == 0)
		return (d);
	if (d < s)
	{
		l = 0;
		while (l < len)
		{
			d[l] = s[l];
			l++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// 	{
// 		char dst[20] = "Hello world";
// 		char *src = "Hi";
// 		size_t len = ft_strlen(dst);

// 		// void *new_result= ft_memmove(dst, src, len);
// 		// printf("Mine %s\n", new_result);

// 		// void *orig_result= memmove(dst,src,len);
// 		// printf("Original %s\n", orig_result);

// 		// char src[] = "abcdef";
// 		// ft_memmove(src + 2, src, 8);

// 		// printf("%s\n", src);

// 		ft_memmove(dst, src, len);
// 		printf("Mine %s\n", dst);

// 		// memmove(dst,src,len);
// 		// printf("Original %s\n", dst);
// 		return (0);
// 	}
