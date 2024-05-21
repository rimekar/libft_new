/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:53:40 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 17:33:24 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("isdigit: %d == ft_isdigit: %d \n", isdigit('1'),ft_isdigit('1'));
	printf("isdigit: %d ==== ft_isdigit:%d \n", isdigit(' '), ft_isdigit(' '));
	printf("isdigit: %d ==== ft_isdigit:%d \n", isdigit('d'), ft_isdigit('d'));
	printf("isdigit: %d ==== ft_isdigit:%d \n", isdigit('_'), ft_isdigit('_'));
	printf("isdigit: %d ==== ft_isdigit:%d \n", isdigit('0'), ft_isdigit('0'));
	return (0);
}
*/