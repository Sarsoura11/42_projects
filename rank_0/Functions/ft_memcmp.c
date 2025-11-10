#include <unistd.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	size_t len;

	str1 = (const unsugned char *) s1;
	str2 = (const unsinged char *) s2;
	i = 0;
	while (i < n)
	{
		if(str1[len] != str2[len])
		{
			return(str1[len] - str2[len]);
		}
		i++;
	}
	return(0);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str1 = "This is different";
	char *str2 = "Than this"
	char *strs1 = "This is the same";
	char *strs2 = "Than is the same";

	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 10));
	printf("memcmp:    %d\n\n", memcmp(str1, str2, 10));
	printf("ft_memcmp  %d\n", ft_memcmp(strs1, strs2, 10));;
	printf("memcmp:    %d\n\n", memcmp(strs1, strs2, 10));;
}
