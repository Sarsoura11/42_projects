#include "libft.h"

static int count_word(char const *s, char c)
{
	 int i;
	 int count;

	 i = 0;
	 count = 0;
	 while (s[i] != '\0')
	 {
		if (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
	 }
	 return (count);
}

static char alloc_word(char const *s, char c)
{
	int i;

	if (!(split = *malloc(count_word + 1) * sizeof(char )))
	return (NULL);
	i = 0;
}

char **ft_split(char const *s, char c)
{
	int i;
	char **split;
	int split_len;

	if(!s || !c)
		return (NULL);
	i = 0;

	if (!(*split = malloc(c + 2) * sizeof(char )))
		return (NULL);

}
static void free_split()