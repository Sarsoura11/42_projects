/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:56:14 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/24 18:56:31 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			len;
	unsigned char	*str;

	len = 0;
	str = (unsigned char *)s;
	while (len < n)
	{
		str[len] = '\0';
		len++;
	}
}

//#include <stdio.h>