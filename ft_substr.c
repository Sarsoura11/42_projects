#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *substring;
	size_t s_len;
	
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);

	if(start >= s_len)
		return(ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substring = malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	
	i = start;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		substring[j] = s[i];
		j++;
		i++;
	}
	substring[j] = '\0';
	return (substring);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s[] = "lorem ipsu";
// 	int start = 0;
// 	size_t len = 10;
// 	char *strsub;

// 	strsub = ft_substr(s, start, len);
// 	printf("%s\n", strsub);
// 	free(strsub);
// 	return (0);
// }