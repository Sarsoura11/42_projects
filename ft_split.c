/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:59:07 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/12/02 17:25:42 by sahamad          ###   ########.fr       */
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
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static void	free_all(char **arr, size_t i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

static char	*alloc_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (ft_substr(s, 0, i));
}

static int	alloc_words(char const *s, char c, size_t word_count, char **result)
{
	size_t	word_idx;

	word_idx = 0;
	while (word_idx < word_count)
	{
		while (*s && *s == c)
			s++;
		result[word_idx] = alloc_word(s, c);
		if (!result[word_idx])
		{
			free_all(result, word_idx);
			return (0);
		}
		while (*s && *s != c)
			s++;
		word_idx++;
	}
	result[word_idx] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (alloc_words(s, c, word_count, result))
		return (result);
	return (NULL);
}

// int main(void)
// {
// 	char **words = ft_split("Hello Sara ", ' ');
// 	for (int i = 0; words[i]; i++)
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 	}
// 	free (words);
// 	return 0;
// }
