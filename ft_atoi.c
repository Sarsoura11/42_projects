/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:49:54 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/24 18:25:50 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow_check(char sign, long long result, long long digit)
{
	if (sign == 1)
	{
		if (result > (LLONG_MAX - digit) / 10)
		{
			return (-1);
		}
	}
	else
	{
		if (result < (LLONG_MIN + digit) / 10)
			return (0);
	}
	return (1);
}

static void	sign_check(const char *str, int sign, int i)
{
	if ((str[i] == '-' || str[i] == '+'))
	{
		if ((str[i + 1] == '-' || str[i + 1] == '+') && (str[i] == '-'
				|| str[i] == '+'))
			return (0);
		else if (str[i] == '-')
			sign = -1;
		i++;
	}
}

static	void	create_num(const char *str, int sign, long long result)
{
	int	i;
	int	digit;
	int	check;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		check = overflow_check(sign, result, digit);
		if (check == 1)
			result = result * 10 + (str[i] - '0');
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	result;
	int			sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign_check(*str, sign, i);
	create_num(*str, sign, result);
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	printf("ft_atoi : %d\n", ft_atoi("-4886"));
// 	printf("ft_atoi : %d\n", ft_atoi("-9223372036854775808"));
// 	printf("atoi : %d\n", atoi("-4886"));
// 	printf("atoi : %d\n", atoi("-9223372036854775808"));
// }