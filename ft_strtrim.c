/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:00:14 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/25 19:00:16 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	len = end - start;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, len);
	trimmed[len] = '\0';
	return (trimmed);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *s1 = " 42 Hello 42 World 42 ";
// 	char *set = " 42 ";
// 	char *trim;

// 	trim = ft_strtrim(s1, set);
// 	printf("strtrim: %s\n", trim);
// 	return (0);
// }

// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char *trim;
// 	int removed;
// 	int s1_len;
// 	int start;
// 	int end;
// 	int trim_str;
// 	int i;

// 	int s1_len = ft_strlen(s1);
// 	start = 0;
// 	end = ft_strlen(s1);
// 	removed = movement(start, end, 0, 0);
// 	trim = malloc((trim_str + 1) * sizeof(char));

// 	if (!(set[i]))
// 		return (s1);

// 	if (ft_strfstr(s1, set, start) == 1)
// 	{
// 		while (s1[start] !='\0')
// 			start++;
// 	}
// 	if (ft_strrstr(s1, set, end) == 1)
// 	{
// 		while (s1[end] >= '0')
// 			end--;
// 	}
// 	trim_str = start - end;
// 	while (s1[start] != s1[end])
// 	{
// 		trim[i++] = s1[start++];
// 	}
// 	return(trim[start]);
// }