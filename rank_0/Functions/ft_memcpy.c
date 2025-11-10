#include <unistd.h>
#include <stdio.h>

void *memcpy(void *restrict dst, const void *restrict src, size_t n)
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
		i++;
	}
	return (dst);
}
