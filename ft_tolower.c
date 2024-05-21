/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:01:02 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:24 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
    printf("tolower: %c ==== ft_tolower:%c \n", tolower('Z'),ft_tolower('Z'));
    printf("tolower: %c ==== ft_tolower:%c \n", tolower(' '), ft_tolower(' '));
    printf("tolower: %c ==== ft_tolower:%c \n", tolower('R'), ft_tolower('R'));
    printf("tolower: %c ==== ft_tolower:%c \n", tolower('0'), ft_tolower('0'));
    printf("tolower: %c ==== ft_tolower:%c \n", tolower('a'), ft_tolower('a'));
    printf("tolower: %c ==== ft_tolower:%c \n", tolower('\n'), ft_tolower('\n'));
    return (0);
}
*/