#include "libft.h"

static size_t count_word(char const *s, char c)
{
	 size_t i;
	 size_t count;

	 i = 0;
	 count = 0;
	while (s[i])
	{
        while (s[i] && s[i] == c)
            i++;

        if (s[i])
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
	}
	 return (count);
}

static int alloc_word(char const *s, char c, char **result)
{
	size_t  i;
    size_t  word_start;
    size_t  word_idx;
	size_t word_len;
	i = 0;
	word_idx = 0;
	while (s[i])
    {
		while (s[i] && s[i] == c)
            i++;

        if (s[i])
        {
            word_start = i;
            while (s[i] && s[i] != c)
                i++;
            word_len = i - word_start;

            result[word_idx] = ft_substr(s, word_start, word_len);
			    if (!result[word_idx])
            	{
					free_all(result, word_idx);
                	return -1;
            	}
        		word_idx++;
		}
	}
	result[i]= NULL;	
	return (0);
}

static void free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[i--]);
	free(arr);
}

char **ft_split(char const *s, char c)
{
	char    **result;
    size_t  word_count;
    size_t  i;

	if(!s)
		return (NULL);
	
	word_count = count_word(s, c);

	if (!(result = malloc(sizeof(char *) * (word_count + 1))))
		return (NULL);
	
	if (alloc_word(s, c, result) == -1)
		return (NULL);
	return(result);
}
