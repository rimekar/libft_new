/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:43:27 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:43:28 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -n;
	}
	else
		num = n;
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num + '0', fd);
}
/*
int main(void) {
    // Testing ft_putnbr_fd with standard output
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);


    ft_putnbr_fd(-67890, 1);
    ft_putchar_fd('\n', 1);

    // Testing ft_putnbr_fd with standard error
    ft_putnbr_fd(54321, 2);
    ft_putchar_fd('\n', 2);

    ft_putnbr_fd(-98765, 2);
    ft_putchar_fd('\n', 2);

    // Optional: Testing ft_putnbr_fd with file output
    int file_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (file_fd != -1)
    {
        ft_putnbr_fd(11223344, file_fd);
        ft_putchar_fd('\n', file_fd);
        ft_putnbr_fd(-55667788, file_fd);
        ft_putchar_fd('\n', file_fd);
        close(file_fd);  // Always close file descriptors when done
    }

    return 0;
}
*/