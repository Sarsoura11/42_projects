/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:38:19 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/10 16:48:48 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = "Hollo!";
// 	int c = 'o';

// 	printf("strrchr %s\n", ft_strrchr(str, c + 256));
// }