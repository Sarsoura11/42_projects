#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			len;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	len = 0;
	if (s == 0 && d == 0)
	{
		return (NULL);
	}
	while (len < n)
	{
		d[len] = s[len];
		len++;
	}
	return (dst);
}
