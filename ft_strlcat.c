/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:43:46 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 18:37:23 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;
	char	*dest_end;

	if (size == 0)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
		return (size + src_len);
	copy_len = size - dest_len - 1;
	dest_end = dest + dest_len;
	while (*src && copy_len)
	{
		*dest_end++ = *src++;
		copy_len--;
	}
	*dest_end = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char dest1[20] = "hello";
	char dest2[20] = "hello";
	char dest3[20] = "dlf";
	char dest4[20] = "dlf";

      return (0);
}
*/