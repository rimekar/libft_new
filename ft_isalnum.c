/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:53:29 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:24 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main(void)
{

	check if the difference in results is ok?
	isalnum: 4 == ft_isalnum: 1 
	isalnum: 0 ==== ft_isalnum:0
	isalnum: 2 ==== ft_isalnum:1
	isalnum: 0 ==== ft_isalnum:0
	isalnum: 4 ==== ft_isalnum:1
	isalnum: 1 ==== ft_isalnum:1
	printf("isalnum: %d == ft_isalnum: %d \n", isalnum('1'),ft_isalnum('1'));
	printf("isalnum: %d ==== ft_isalnum:%d \n", isalnum(' '), ft_isalnum(' '));
	printf("isalnum: %d ==== ft_isalnum:%d \n", isalnum('d'), ft_isalnum('d'));
	printf("isalnum: %d ==== ft_isalnum:%d \n", isalnum('_'), ft_isalnum('_'));
	printf("isalnum: %d ==== ft_isalnum:%d \n", isalnum('0'), ft_isalnum('0'));
	printf("isalnum: %d ==== ft_isalnum:%d \n", isalnum('Z'), ft_isalnum('Z'));
	return (0);
}
*/
