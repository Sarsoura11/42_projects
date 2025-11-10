#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char *s;
	unsigned char *d;
	size_t l;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if ((!dst && !src) || len == 0)
		return (d);
	if(d < s)
	{
		l = 0;
		while (l < len)
		{
			d[l] = s[l];
			l++;
		}
	}
	else
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	return (dst);
}

int main(void)
{
	char dst[20] = "Hello World!";
	char *src = "Hi";
	size_t len = 15;

	void *new_result = ft_memmove(dst, src, len);
	printf("Mine %s\n", (char *)new_result);

	void *orig_result = memmove(dst, src, len);
	printf("Original %s\n", (char *)orig_result);
	// ft_memmove(dst, src, len);
	// printf("Copied %s\n", dst);

	// memmove(dst, src, len);
	// printf("Copied %s\n", dst);
	return (0);
}


