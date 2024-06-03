/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:15:28 by rkarout           #+#    #+#             */
/*   Updated: 2024/06/03 13:15:28 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	i = 0;
	if (size == 0)
	{
		len = ft_strlen(src);
		return (len);
	}
	while (*s && i < size - 1)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	if (size > 0)
		*d = '\0';
	while (*s++)
		i++;
	return (i);
}
