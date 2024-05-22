/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:34:03 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:47:59 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}
/*
int main(void)
 {
    char *msg = "Hello, world!";

    // Standard output test
    ft_putendl_fd(msg, 1);  // 1 is the file descriptor for  output

    // Standard error test
    ft_putendl_fd("Hello, error!", 2);  

    // Optional: File output test
    int file_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (file_fd != -1)
    {
        ft_putendl_fd("Hello, file!", file_fd);
        close(file_fd);  // Always close file descriptors when done
    }

    return 0;
}*/