#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	sign = 0;
	result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		else if(str[i] == '-')
			sign = -1;
		i++;
	}

	if((str[i] == '-' || str[i] == '+') && (str[i + 1] == '-' || str[i + 1] == '+'))
		return (0);

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (!(sign % 2 == 0))
		result = -result;
	return (result);
}