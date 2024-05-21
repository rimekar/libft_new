/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:49:01 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/21 19:03:56 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nptr && *nptr == ' ')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * num);
}
/*
int main(void)
{
    printf("atoi: %d == ft_atoi: %d \n", atoi("123"),ft_atoi("123"));
   printf("atoi: %d ==== ft_atoi:%d \n", atoi("54986"), ft_atoi("54986"));
   printf("atoi: %d ==== ft_atoi:%d \n", atoi("-2147483648"), ft_atoi("-2147483648"));
   printf("atoi: %d ==== ft_atoi:%d \n", atoi("2147483647"), ft_atoi("2147483647"));
   printf("atoi: %d ==== ft_atoi:%d \n", atoi("+648"), ft_atoi("+648"));
   printf("atoi: %d ==== ft_atoi:%d \n", atoi("     123"), ft_atoi("     123"));
    printf("atoi: %d ==== ft_atoi:%d \n", atoi("     ++123"), ft_atoi("     ++123"));
    printf("atoi: %d ==== ft_atoi:%d \n", atoi("     --123"), ft_atoi("     --123"));
    printf("atoi: %d ==== ft_atoi:%d \n", atoi("     --123ertet"), ft_atoi("     --123ertet"));
    printf("atoi: %d ==== ft_atoi:%d \n", atoi("     -123ertet"), ft_atoi("     -123ertet"));

    return (0);
}
*/