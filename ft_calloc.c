/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:13:47 by rkarout           #+#    #+#             */
/*   Updated: 2024/06/03 13:13:47 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	total_size;

	total_size = count * size;
	memory = malloc(total_size);
	if (memory != NULL)
	{
		ft_memset(memory, 0, total_size);
	}
	return (memory);
}
