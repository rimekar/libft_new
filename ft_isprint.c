/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:01:11 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:24 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("isprint: %d ==== ft_isprint: %d \n", isprint('1'),ft_isprint('1'));
	printf("isprint: %d ==== ft_isprint:%d \n", isprint(' '), ft_isprint(' '));
	printf("isprint: %d ==== ft_isprint:%d \n", isprint('\n'), ft_isprint('\n'));
	printf("isprint: %d ==== ft_isprint:%d \n", isprint('_'), ft_isprint('_'));
	printf("isprint: %d ==== ft_isprint:%d \n", isprint('0'), ft_isprint('0'));
	printf("isprint: %d ==== ft_isprint:%d \n", isprint('\t'), ft_isprint('\t'));
	return (0);
}
*/