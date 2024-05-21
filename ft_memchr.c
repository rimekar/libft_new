/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:31:02 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 18:44:40 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*p;

	p = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*p == ch)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
/*
int main(void) 
{
    char src[] = "Hello";
    char *found;
    unsigned char c;

    // Find character 'e' in src
    c = 'e';
    found = ft_memchr(src, c, sizeof(src));
    if (found != NULL)
    {
        printf("Character '%c' found: '%s'\n", c, found);
    } 
    else 
    {
        printf("Character '%c' not found.\n", c);
    }

    // Try to find a character that is not in src
    c = 'x';
    found = ft_memchr(src, c, sizeof(src));
    if (found != NULL) 
    {
        printf("Character '%c' found: '%s'\n", c, found);
    } else 
    {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}
*/