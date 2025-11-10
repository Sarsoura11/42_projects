// #include "libft.h"
#include <unistd.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	s = 0;
	i = 0;
	while (dst[d] != 0 && d < dstsize)
		d++;
	while (src[s] != 0)
		s++;
	while (src[i] != 0 && (d + i + 1) < dstsize)
	{
		dst[d + i] = src[i];
		i++;
	}
	if (d < dstsize)
		dst[d + i] = '\0';
	return (d + s);
}

// #include <stdio.h>

// int main (int ac, char **av) {

// 	if (ac != 2) {
// 		printf("not enough arguments\n");
// 		return (1);
// 	}

// 	// Use a character array instead of string literal
// 	char dst[50] = "Hello ";  // Array with enough space, initialized with "Hello "
// 	char *src = av[1];
	
// 	// Fix: sizeof(dst) is correct here since dst is now an array
// 	// But you might want to use the actual size you allocated
// 	int size = sizeof(dst);

// 	printf("strlcat {%zu}\n", ft_strlcat(dst, src, size));
// 	printf("final string {%s}\n", dst);

// 	return (0);
// }