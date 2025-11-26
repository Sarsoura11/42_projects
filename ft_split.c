/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:59:07 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/25 19:59:43 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int	alloc_word(char const *s, char c, char **result)
{
	size_t	i;
	size_t	word_start;
	size_t	word_idx;
	size_t	word_len;

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
				return (-1);
			}
			word_idx++;
		}
	}
	result [i] = NULL;
	return (0);
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
	if (alloc_word(s, c, result) == -1)
		return (NULL);
	return (result);
}
