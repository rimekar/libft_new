/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:09:07 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:24 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/*
int	main(void)
{
	size_t	i;
	char str[] = "Hello, world!";
	printf("Before memset: '%s'\n", str);
	i = 0;
	ft_memset(str, '#', strlen(str));

	printf("After memset: '");
	while (i < strlen(str))
	{// Correct the condition to avoid out-of-bounds access
		printf("%02x ", (unsigned char)str[i]); // Use the correct index in the loop
		i++;
	}
	printf("'\n");

	return (0);
}
*/