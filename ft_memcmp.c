/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:18:07 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/26 12:18:09 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				len;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	len = 0;
	while (len < n)
	{
		if (str1[len] != str2[len])
		{
			return (str1[len] - str2[len]);
		}
		len++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char *str1 = "This is different";
// 	char *str2 = "Than this";
// 	char *strs1 = "This is the same";
// 	char *strs2 = "Than is the same";

// 	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 10));
// 	printf("memcmp:    %d\n\n", memcmp(str1, str2, 10));
// 	printf("ft_memcmp  %d\n", ft_memcmp(strs1, strs2, 10));
// 	printf("memcmp:    %d\n\n", memcmp(strs1, strs2, 10));
// }