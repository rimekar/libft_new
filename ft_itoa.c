/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:03:36 by rkarout           #+#    #+#             */
/*   Updated: 2024/06/03 13:03:36 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	find_length(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	size_t	sign;
	int		temp_n;

	sign = 1;
	temp_n = n;
	if (n < 0)
		sign = -1;
	len = find_length(n);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (len > 0 && temp_n != 0)
	{
		len--;
		str[len] = '0' + sign * (temp_n % 10);
		temp_n /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
