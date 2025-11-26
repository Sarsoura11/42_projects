/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:50:30 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/26 11:50:31 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*combined;
	int		tot_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	tot_len = (ft_strlen(s1)) + (ft_strlen(s2));
	combined = malloc((tot_len + 1) * sizeof(char));
	if (!combined)
		return (NULL);
	while (s1[i] != '\0')
	{
		combined[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		combined[i++] = s2[j++];
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