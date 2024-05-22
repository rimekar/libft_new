/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:46:17 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:45:58 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> // For malloc and free
#include <string.h> // For strlen
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined_str = malloc(len1 + len2 + 1);
	if (joined_str == NULL)
		return (NULL);
	i = 0;
	while (i++ < len1)
		joined_str[i] = s1[i];
	j = 0;
	while (j < len2)
	{
		joined_str[i + j] = s2[j];
		j++;
	}
	joined_str[i + j] = '\0';
	return (joined_str);
}
/*
int main(void)
{
    char const *s1 = "Hello";
    char const *s2 = " World!";
    char *result;

    result = ft_strjoin(s1, s2);
    if (result == NULL)
    {
        printf("Failed to allocate memory for joined string.\n");
    }
    else
    {
        printf("Joined string: '%s'\n", result);
        free(result); // Always free dynamically allocated memory
    }

    return (0);
}*/