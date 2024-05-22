/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:48:32 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:47:53 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void modify_char(unsigned int i, char *c)
{
    *c = *c + i; 
}

int main(void)
{
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    ft_striteri(str, modify_char); 
    printf("Modified string: %s\n", str);

    return (0);
}
*/