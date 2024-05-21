/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:58:31 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:24 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
    printf("toupper: %c ==== ft_toupper:%c \n", toupper('1'),ft_toupper('1'));
    printf("toupper: %c ==== ft_toupper:%c \n", toupper(' '), ft_toupper(' '));
    printf("toupper: %c ==== ft_toupper:%c \n", toupper('R'), ft_toupper('R'));
    printf("toupper: %c ==== ft_toupper:%c \n", toupper('0'), ft_toupper('0'));
    printf("toupper: %c ==== ft_toupper:%c \n", toupper('a'), ft_toupper('a'));
    printf("toupper: %c ==== ft_toupper:%c \n", toupper('\n'), ft_toupper('\n'));
    return (0);
}
*/