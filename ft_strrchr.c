/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:12:48 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 21:36:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	while (len > 0)
	{
		if (*s == c)
			return ((char *)s);
		len--;
		s--;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
char *ft_strrchr(const char *s, int c)
{
    char *last_occurrence;
	last_occurrence = NULL;

    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = (char *)s;
        s++;
    }

    if (c == '\0')
        return (char *)s;
    
    return (last_occurrence);
}
