#include "libft.h"
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t len;
	unsigned char *str;

	len = 0;
	str = (unsigned char*)s;

	while (len < n)
	{
		str[len] = '\0';
		len++;
	}
}
