/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:59:07 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/26 18:48:59 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

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

static void	free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[i--]);
	free(arr);
}

// static char	alloc_word(char const *s, char c, char **result, size_t i, size_t word_idx)
// {
// 	size_t	word_start;
// 	size_t	word_len;

// 		while (s[i] && s[i] == c)
// 			i++;
// 		if (s[i])
// 		{
// 			word_start = i;
// 			while (s[i] && s[i] != c)
// 				i++;
// 			word_len = i - word_start;
// 			result[word_idx] = ft_substr(s, word_start, word_len);
// 			if (!result[word_idx])
// 			{
// 				free_all(result, word_idx);
// 				return (-1);
// 			}
// 			word_idx++;
// 		}
// 		return (0);
// }

static char	*alloc_word(char const *s, char c)
{
	size_t i ;
	char *first_char = s;
	char *word;

		i = 0;
		while (s[i] && s[i] == c)
			i++;
		word = ft_substr(s, 0, i);
		if (!word)
			return NULL;
		return word;

}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_idx;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	word_idx = 0;
	while (s)
	{
		while(s && *s == c)
			s++;
		result[word_idx] = alloc_word(s, c);
		if (!result[word_idx])
		{
			free_all(result, word_idx);
			return NULL;
		}
		while(s && *s != c)
			s++;
	}
	result [word_idx] = NULL;
	return (result);
}

int main(void)
{
	char *str = "  Hello 42 World";
	char **words;

	str++;
	words = ft_split(str, ' ');
	for (int i = 0; words[i]; i++)
	{
		printf("%s\n", words[i]);
	}
	return (0);
}