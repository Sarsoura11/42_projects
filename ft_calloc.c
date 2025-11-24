/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamad <sahamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:56:43 by sahamad           #+#    #+#             */
/*   Updated: 2025/11/24 18:58:34 by sahamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memspace;
	size_t	total;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > 0 && size > SIZE_MAX / count)
		return (NULL);
	total = count * size;
	memspace = malloc(total);
	if (!memspace)
		return (NULL);
	ft_memset(memspace, 0, total);
	return (memspace);
}

// #include <stdio.h>

// int main(void)
// {
// 	size_t size = 123;
// 	size_t count = 1;
// 	int *array;
// 	size_t i;

// 	array = ft_calloc(count, size);

// 	i = 0;
// 	while(i < ((count * size)/sizeof(int)))
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}

// 	printf("}\n(%zu)", i);
// 	return (0);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n = 5;
//     int *arr = malloc(0);

//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return (1);
//     }

//     // initialize and print the array
//     for (int i = 0; i < n; i++) {
//         arr[i] = i * 10;
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     free(arr); // free allocated memory
//     return (0);
// }

// SIZE_MAX = 18446744073709551615UL
// if (count > SIZE_MAX / size)
// 	return (NULL);