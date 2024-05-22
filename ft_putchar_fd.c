/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:52:47 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:48:06 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    char c;
    int file_fd;

    c = 'A';
    ft_putchar_fd(c, 1);


    c = 'B';
    ft_putchar_fd(c, 2);



    file_fd = open("example_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (file_fd != -1) {
        c = 'C';
        ft_putchar_fd(c, file_fd);
        close(file_fd);
    }

    return (0);
}
*/