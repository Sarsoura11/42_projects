#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char *s;
	unsigned char *d;
	size_t l;
	
	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if ((!dst && !src) || len == 0)
		return(d);
	if (d < s)
	{
		l = 0;
		while (l <= len)
		{
			d[l] = s[l];
			l++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
