/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:02:44 by sahamad           #+#    #+#             */
/*   Updated: 2025/09/07 14:43:00 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
//
// void	ft_putstr(char *str)
// {
// 	int	i;
//
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!(to_find[i]))
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "Today is Friday\n";
// 	char	search_str[] = "F";
// 	char *test;
//
// 	test =ft_strstr(str, search_str);
//
// 	if (test)
// 		ft_putstr(test);	
// 	return (0);
// }
