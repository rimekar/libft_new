/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:09:24 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:24 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	const char	*last_s;
	char		*last_d;

	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		last_s = s + (n - 1);
		last_d = d + (n - 1);
		while (n--)
			*last_d-- = *last_s--;
	}
	return (dest);
}
/*
int main(void)
{
	char src[] = "Hello";
	char dest[6];
	char dest2[6];
	char dest3[10];
	size_t i;
	size_t n;

	i = 0;
	while (i < sizeof(dest))
	{
		dest[i] = 0;
		i++;
	}

	i = 0;
	while (i < sizeof(dest2))
	{
		dest2[i] = 0;
		i++;
	}

	i = 0;
	while (i < sizeof(dest3))
	{
		dest3[i] = 0;
		i++;
	}

	n = sizeof(src);
	ft_memmove(dest, src, n);  // Copy including the null terminator

	printf("Test 1 - Exact Copy: '%s'\n", dest);

	n = 3;
	ft_memmove(dest2, src, n);  // Only copy first three characters
	dest2[n] = '\0'; // Manually null-terminate since only part was copied

	printf("Test 2 - Partial Copy: '%s'\n", dest2);

	n = 9;
	ft_memmove(dest3, src, n);  // Attempt to copy more characters than in src
	dest3[n] = '\0'; // Ensure null-termination

	printf("Test 3 - Over Copy (safe within buffer): '%s'\n", dest3);

	return (0);
}
*/