/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:35:26 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:48:10 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int main(void)
{
    char const *s = "Hello, World!";
    char *substring;
    unsigned int start;
    size_t len;

    start = 7; // Starting index for the substring
    len = 5;   // Length of the substring

    substring = ft_substr(s, start, len);
    if (substring == NULL)
    {
        printf("Failed to allocate memory for substring.\n");
    }
    else 
    {
        printf("Substring: '%s'\n", substring);
        free(substring); // Always free dynamically allocated memory
    }

    return (0);
}*/