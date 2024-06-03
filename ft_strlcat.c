/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:43:46 by rkarout           #+#    #+#             */
/*   Updated: 2024/06/03 17:43:11 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;
	char	*dest_end;

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
