/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:49:54 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/27 13:48:57 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow_check(char sign, long long *result, long long digit)
{
	if (sign == 1)
	{
		if (*result > (LLONG_MAX - digit) / 10)
		{
			return (-1);
		}
	}
	if (sign == -1)
	{
		if (*result < (LLONG_MIN + digit) / 10)
			return (0);
	}
	return (1);
}

static void	create_num(int i, const char *str, int sign, long long *result)
{
	int	digit;
	int	check;

	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		check = overflow_check(sign, result, digit);
		if (check == 1)
			*result = *result * 10 + digit;
		else
		{
			if (check == -1)
			{
				*result = LLONG_MAX;
				return ;
			}
			else if (check == 0)
			{
				*result = LLONG_MIN;
				return ;
			}
		}
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
	if ((str[i] == '-' || str[i] == '+'))
	{
		if ((str[i +1] == '-' || str[i +1] == '+') && (str[i] == '-'
				|| str[i] == '+'))
			return (0);
		else if (str[i] == '-')
			sign = -1;
		i++;
	}
	create_num(i, str, sign, &result);
	if (result == LLONG_MAX && sign == 1)
		return (INT_MAX);
	if (result == LLONG_MIN && sign == -1)
		return (INT_MIN);
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	printf("ft_atoi : %d\n", ft_atoi(""));
// 	printf("atoi : %d\n", atoi(""));
// 	printf("ft_atoi : %d\n", ft_atoi("-2147483648"));
// 	printf("atoi : %d\n", atoi("-2147483648"));
// 	printf("ft_atoi : %d\n", ft_atoi("+5885959"));
// 	printf("atoi : %d\n", atoi("+5885959"));
// 	printf("ft_atoi : %d\n", ft_atoi("+588 59  59 "));
// 	printf("atoi : %d\n", atoi("+588 5959 "));


// }