/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:46:07 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:33:33 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/*
int main(void) {
    int fd;

    // Output to standard output (stdout, file descriptor 1)
    ft_putstr_fd("Hello, standard output!\n", 1);

    // Output to standard error (stderr, file descriptor 2)
    ft_putstr_fd("Hello, standard error!\n", 2);

    // Optional: Output to a file
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd != -1) {
        ft_putstr_fd("Hello, file!\n", fd);
        close(fd); // Always close file descriptors when done
    }

    return 0;
}
*/