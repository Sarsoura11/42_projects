#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *orig_str;
	char *new_str;
	size_t str_len;

	if (!s)
		return (NULL);
	i = 0;
	orig_str = (char *) s;
	str_len = ft_strlen(s);
	if(!(new_str = malloc(str_len + 1)))
		return (NULL);
	
	while (orig_str[i] != 0)
	{
		new_str[i] = f(i, orig_str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// char changestr(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c -= 32;
// 	}
// 	return (c);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char s[] = "";
// 	char *result;

// 	result = ft_strmapi(s, changestr);
// 	printf("%s\n", result);
// 	return (0);
// }

// void ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
// 	unsigned int i;
// 	char *str;

// 	i = 0;
	
// 	if(!(str = malloc(s + 1)))
// 		return (NULL);
	
// 	if (s[i] != 0)
// 	{
// 		f(i, s);
// 	}
// }

// void changestr(unsigned int i, char *str)
// {
// 	while (str[i] != 0)
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 		{
// 			str[i] -= 32;
// 		}
// 		i++;
// 	}
// }
// #include <stdio.h> 

// int main(void)
// {
// 	char s[] = "hello";
// 	char *result;

// 	ft_striteri(s, changestr);

// 	result = s;
// 	printf("%s\n", result);
// 	return (0);
// }