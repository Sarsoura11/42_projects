#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			len;

	len = 0;
	str = (unsigned char *)s;
	while (len < n)
	{
		if (str[len] == (unsigned char)c)
			return ((unsigned char *)&str[len]);
		len++;
	}
	return (NULL);
}
