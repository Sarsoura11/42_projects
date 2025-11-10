#include <unistd.h>
#include <stdio.h>
#include <stlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (!(sign % 2 == 0))
		result = -result;
	return (result);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
// 	return (0);
// }
//
// result 0
// result = 0 * 10 = 0 + 5
// result = 5 * 10 = 50 + 8 = 58
// result 58 * 10 = 580 + 7 = 587