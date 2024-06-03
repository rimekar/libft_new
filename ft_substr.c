/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:35:26 by rkarout           #+#    #+#             */
/*   Updated: 2024/06/03 18:20:46 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	min(size_t a, size_t b)
{
	size_t	result;

	result = a;
	if (b < a)
		result = b;
	return (result);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	max_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen (s);
	if (start >= s_len)
		return (ft_strdup(""));
	max_len = min(s_len - start, len);
	sub = malloc(max_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < max_len)
	{
	sub[i] = s[start + i];
	i++;
	}
	sub[max_len] = '\0';
	return (sub);
}
