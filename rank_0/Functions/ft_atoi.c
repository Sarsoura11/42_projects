#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int overflow_check(int sign, long long result, long long digit)
{
	if (sign == 1) {
		// same as saying result * 10 + (digit) > LLONG_MAX, just flipped
        if (result > (LLONG_MAX - digit) / 10)  // if (result == 214748364 && digit > 7)
		{
            return -1;  // positive overflow
        }
    } 
	else 
	{
        if (-result < (LLONG_MIN + digit) / 10) 
		{
            return 0;  // negative overflow
        }
    }
	return (1); // no overflow
}

int	ft_atoi(const char *str)
{
	int	i;
	long long	result;
	int digit;
	int	sign;
	int check;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
			return 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		check = overflow_check(sign, result, digit);
		if (check == 1)
		{
			result = result * 10 + (digit);
		}
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%lld\n", ft_atoi("-922337203685477580"));
	printf("%lld\n", ft_atoi("922337203685477580"));
	printf("%lld\n", atoi("-922337203685477580"));
	printf("%lld\n", atoi("922337203685477580"));
	return (0);
}

// result 0
// result = 0 * 10 = 0 + 5
// result = 5 * 10 = 50 + 8 = 58
// result 58 * 10 = 580 + 7 = 587