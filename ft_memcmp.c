/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:31:06 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 18:43:29 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					result;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
		{
			result = *str1 - *str2;
			return (result);
		}
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
int main(void) 
{
    char src1[] = "Hello";
    char src2[] = "Hello";
    char src3[] = "World";
    int result;

    // Compare two identical strings
    result = ft_memcmp(src1, src2, sizeof(src1));
    printf("Comparison of identical strings: %d\n", result);

    // Compare two different strings
    result = ft_memcmp(src1, src3, sizeof(src1));
    printf("Comparison of different strings: %d\n", result);

    return 0;
}
*/