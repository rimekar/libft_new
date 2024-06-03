/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:09:24 by rkarout           #+#    #+#             */
/*   Updated: 2024/06/03 18:55:27 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	const char	*last_s;
	char		*last_d;

	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		last_s = s + (n - 1);
		last_d = d + (n - 1);
		while (n--)
			*last_d-- = *last_s--;
	}
	return (dest);
}
