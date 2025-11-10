#include "libft.h"
#include <stdio.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return ((unsigned char)c);
}
