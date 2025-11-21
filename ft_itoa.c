#include "libft.h"

static int count_digits(long n)
{
	int digits;

	digits = 0;

	if(n == 0)
		return (1);

	if(n < 0)
		n = -n;

	while(n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char *ft_itoa(int n)
{
	long num;
	int len;
	int base;
	int is_negative;
	char *result;

	num = n;
	base = 10;
	is_negative = n < 0;

	len = count_digits(num);

	if(is_negative)
		len++;

	if (!(result = malloc((len + 1) * sizeof(char))))
		return (NULL);

	// filling in backwards is safer
	result[len] = '\0';

	if (n == 0)
		result[len - 1] = '0';
	len--;
	while (num > 0)
	{
		if(is_negative && len == 0)
			result[0] = '-';
		else 
		{
			result[len] = (num % base) + '0';
			num = num / base;
		}
		len--;
	}
	return (result);
}

// #include <stdio.h>

// int main (void)
// {
// 	int n = 23;

// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }