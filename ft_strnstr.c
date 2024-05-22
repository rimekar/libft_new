/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:48:54 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 21:42:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"


char *ft_strnstr(const char *s1, const char *s2, size_t n) {
    size_t i;
    size_t j;
    size_t s2_len;
    size_t limit;

    s2_len = ft_strlen(s2);

    if (*s2 == '\0')
        return ((char *)s1);
    if (s2_len == 0)
        return ((char *)s1);
    if (n < s2_len)
        return NULL;

    limit = n - s2_len;
    i = 0;

    while (i <= limit && s1[i] != '\0') {
        j = 0;
        while (j < s2_len && s1[i + j] == s2[j])
            j++;
        if (j == s2_len)
            return ((char *)(s1 + i));
        i++;
    }

    return NULL;
}

/*
int main(void)
{
    const char *text = "Hello, this is a test string.";
    const char *search_for = "test";
    printf("strnstr (within limit): %s\n", strnstr(text, search_for, 30) ? strnstr(text, search_for, 30) : "Not found");
    printf("strnstr (out of limit): %s\n", strnstr(text, search_for, 10) ? strnstr(text, search_for, 10) : "Not found");
    printf("strnstr (empty needle): %s\n", strnstr(text, "", 50) ? strnstr(text, "", 50) : "Not found");
    printf("strnstr (beyond text length): %s\n", strnstr(text, search_for, 50) ? strnstr(text, search_for, 50) : "Not found");
    printf("strnstr (at the end): %s\n", strnstr(text, "string.", 50) ? strnstr(text, "string.", 50) : "Not found");
    printf("strnstr (at the beginning): %s\n", strnstr(text, "Hello", 50) ? strnstr(text, "Hello", 50) : "Not found");
    printf("strnstr (not present): %s\n", strnstr(text, "xyz", 50) ? strnstr(text, "xyz", 50) : "Not found");
    const char *new_text = "Special $$$%% symbols.";
    printf("strnstr (special characters): %s\n", strnstr(new_text, "$$$%%", 50) ? strnstr(new_text, "$$$%%", 50) : "Not found");
    return 0;
}
*/