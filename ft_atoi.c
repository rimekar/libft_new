/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:49:01 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 21:02:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


int ft_atoi(const char *nptr)
{
    int num;
    int sign;
	int digit;

	
    num = 0;
    sign = 1;
    while (*nptr == ' ')
        nptr++;
    if (*nptr == '-')
	{
        sign = -1;
        nptr++;
    }
	else if (*nptr == '+')
        nptr++;
    while (*nptr >= '0' && *nptr <= '9')
	{
		digit = *nptr - '0';
        if (num > 214748364 || (num == 214748364 && digit > 7))
            return 0;
        num = num * 10 + digit;
        nptr++;
    }
    return (sign * num);
}


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
