/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:01:06 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:24 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("isascii: %d == ft_isascii: %d \n", isascii('1'),ft_isascii('1'));
	printf("isascii: %d ==== ft_isascii:%d \n", isascii(' '), ft_isascii(' '));
	printf("isascii: %d ==== ft_isascii:%d \n", isascii('d'), ft_isascii('d'));
	printf("isascii: %d ==== ft_isascii:%d \n", isascii('_'), ft_isascii('_'));
	printf("isascii: %d ==== ft_isascii:%d \n", isascii('0'), ft_isascii('0'));
	printf("isascii: %d ==== ft_isascii:%d \n", isascii('Z'), ft_isascii('Z'));
	// Test with a non-ASCII character
	printf("isascii: %d ==== ft_isascii:%d \n", isascii(128), ft_isascii(128));

	return (0);
}
*/