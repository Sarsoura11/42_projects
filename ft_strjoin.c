#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *combined;
	int tot_len;

	int i = 0;
	int j = 0;
	
	if(!s1 || !s2)
		return (NULL);
	tot_len = (ft_strlen(s1)) + (ft_strlen(s2));
	if(!(combined = malloc((tot_len + 1) * sizeof(char))))
		return(NULL);
	
	while (s1[i] != '\0')
	{
		combined[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		combined[i] = s2[j];
		i++;
		j++;
	}
	combined[i] = '\0';
	return (combined);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *s1 = "Hello ";
// 	char *s2 = "World!";
// 	char *my_result;

// 	my_result = ft_strjoin(s1, s2);

// 	printf("Combined: %s\n", my_result);

// 	free(my_result);
// 	return (0);
// }