/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:13:42 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/24 19:22:42 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

static void	fill_in(int num, int len, char *result, int is_negative)
{
	int	base;

	base = 10;
	result[len] = '\0';
	if (num == 0)
		result[len - 1] = '0';
	len--;
	while (num > 0)
	{
		if (is_negative && len == 0)
			result[0] = '-';
		else
		{
			result[len] = (num % base) + '0';
			num = num / base;
		}
		len--;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	int		is_negative;
	char	*result;

	num = n;
	is_negative = n < 0;
	len = count_digits(num);
	if (is_negative)
		len++;
	if (!(result = malloc((len + 1) * sizeof(char))))
		return (NULL);
	fill_in(num, len, *result, is_negative);
	return (result);
}

// #include <stdio.h>

// int main (void)
// {
// 	int n = 23;

// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }