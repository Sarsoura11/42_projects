/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara_hamad11 <sara_hamad11@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:52:11 by sara_hamad1       #+#    #+#             */
/*   Updated: 2025/11/26 11:52:50 by sara_hamad1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

// void changestr(unsigned int i, char *str)
// {
// 	(void)i;

// 	if (str[i] == ' ')
// 	{
// 		str[i] = '-';
// 	}
// }
// #include <stdio.h> 

// int main(void)
// {
// 	char s[] = "h e l l o";
// 	char *result;

// 	ft_striteri(s, changestr);

// 	result = s;
// 	printf("%s\n", result);
// 	return (0);
// }

// char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	char *str;
// 	unsigned int i;

// 	i = 0;
// 	str = (char *)s;

// 	while (str[i] != 0)
// 	{
// 		str[i] = f(i, str[i]);
// 		i++;
// 	}
// 	return (str);
// }

// char ft_changestr(unsigned int g, char c)
// {
// 	(void)g;

// 	if (c == ' ')
// 	{
// 		c = '-';
// 	}
// 	return (c);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char s[] = " He l l o";
// 	char *result;

// 	result = ft_strmapi(s, ft_changestr);
// 	printf("%s\n", result);
// 	return (0);
// }