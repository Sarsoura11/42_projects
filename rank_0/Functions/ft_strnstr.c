#include <unistd.h>
#include <stdio.h>

char * ft_strnstr(const char *haystack, const char *needle,
         size_t len);
char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if ((char)c == str[i])
		{
			return (str + i);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return (str + i);
	}
	return (NULL);
}