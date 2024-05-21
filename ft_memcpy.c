/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:09:19 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:56:26 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hello";
	char	dest[6];
	char	dest2[6];
	char	dest3[10];
	unsigned int	i;

	i = 0;
	while (i++ < 6)
	{
		dest[i] = 0;
		dest2[i] = 0;
	}
	while (i++ < 10)
	{
		dest3[i] = 0;
	}

	ft_memcpy(dest, src, sizeof(src));  // Copy including the null terminator

	printf("Test 1 - Exact Copy: '");
	i = 0;
	while (i++ < sizeof(dest))
	printf("%c", dest[i]);

	printf("'\n");

	ft_memcpy(dest2, src, 3);  // Only copy first three characters

	printf("Test 2 - Partial Copy: '");
	i = 0;
	while (i++ < 6)
		printf("%c", dest2[i]);  // Print each byte as a character

	printf("'\n");

	ft_memcpy(dest3, src, 9);  // Attempt to copy more characters than in src

	printf("Test 3 - Over Copy (safe within buffer): '");
	i = 0;
	while (i++  < sizeof(dest3))
		printf("%c", dest3[i]);  // Print each byte as a character}
	printf("'\n");

	return 0;
}
*/