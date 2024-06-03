/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:31:02 by rkarout           #+#    #+#             */
/*   Updated: 2024/06/03 18:54:53 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*p;

	p = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*p == ch)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
