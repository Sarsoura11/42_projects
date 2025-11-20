#include "libft.h"

static int overflow_check(char sign, long long result, long long digit)
{
	if (sign == 1)
	{	// llong_max > result * 10 + digit 
		if (result > (LLONG_MAX - digit) / 10)
		{
			return (-1); // positive overflow
		}
	}
	else 
	{
		if (result < (LLONG_MIN + digit) / 10)
		return (0); // negative overflow
	}
	return (1);
}
int	ft_atoi(const char *str)
{
	int i;
	long long result;
	int digit;
	int sign;
	int check;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	// if((str[i] == '-' || str[i] == '+') && (str[i + 1] == '-' || str[i + 1] == '+'))
	// 	return (0);
	
	if ((str[i] == '-' || str[i] == '+'))
	{
		if((str[i + 1] == '-' || str[i + 1] == '+') && (str[i] == '-' || str[i] == '+'))
			return (0);
		else if(str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		check = overflow_check(sign, result, digit);
		if (check == 1)
		{
			result = result * 10 + (str[i] - '0');
		}
		i++;
	}
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