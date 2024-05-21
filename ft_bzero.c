/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:09:14 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:50 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p++ = 0;
	}
}
/*
int main(void)
{
	size_t i;
	char str[] = "Hello, world!";
	printf("Before bzero: '%s'\n", str);

	i = 0;
	ft_bzero(str, strlen(str));

	printf("After bzero: '");
	while ( i++ < sizeof(str))
	{
		printf("%02x ", (unsigned char)str[i]);
	}
	printf("'\n");

	return (0);
}
*/