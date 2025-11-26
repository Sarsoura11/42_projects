/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:13:42 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/25 18:38:13 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long long n)
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

static void	fill_in(long long num, int len, char *result, int is_negative)
{
	result[len] = '\0';
	if (num == 0)
	{
		result[len - 1] = '0';
		return ;
	}
	len--;
	while (num > 0)
	{
		result[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	if (is_negative)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	long long	num;
	int			len;
	int			is_negative;
	char		*result;

	num = n;
	is_negative = n < 0;
	if (is_negative)
		num = -num;
	len = count_digits(num);
	if (is_negative)
		len++;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	fill_in(num, len, result, is_negative);
	return (result);
}

// #include <stdio.h>

// int main (void)
// {
// 	int n = 23;

// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }