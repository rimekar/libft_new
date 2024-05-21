/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:55:59 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 19:04:36 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}
/*
int main(void) 
{
    char *original;
    char *copy;

    original = "Copy this"; 
    copy = ft_strdup(original); // Duplicate the string

    if (copy != NULL)
    {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
    } 
    else 
    {
        printf("Failed to allocate memory for the copy.\n");
    }

    free(copy); 

    return 0;
}
*/