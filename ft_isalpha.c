/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:38:37 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 15:08:33 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
	printf("Is alpha: a = %d\n", ft_isalpha('a'));
	printf("Is alpha: a = %d\n", ft_isalpha('1'));
	printf("Is alpha: a = %d\n", ft_isalpha('-'));
	return (0);
}*/
