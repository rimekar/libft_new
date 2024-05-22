/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:46:32 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:47:49 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	size_t			len;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
char modify_char(unsigned int i, char c)
{
    return c + i; // Increment character by its index for demonstration
}

int main(void)
{
    char const *s = "hello, world!";
    char *mapped_str;

    mapped_str = ft_strmapi(s, modify_char); 
    if (mapped_str == NULL)
        printf("Failed to allocate memory for mapped string.\n");
    else
    {
        printf("Original string: %s\n", s);
        printf("Mapped string: %s\n", mapped_str);
        free(mapped_str);
    }

    return (0);
}
*/