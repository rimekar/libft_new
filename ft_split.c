/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:49:29 by rkarout           #+#    #+#             */
/*   Updated: 2024/05/22 16:49:31 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s == c && in_substring)
			in_substring = 0;
		else if (*s != c && !in_substring)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*make_word(const char *start, const char *end)
{
	char	*word;
	size_t	length;

	length = end - start;
	word = malloc(length + 1);
	if (word == NULL)
		return (NULL);
	strncpy(word, start, length);
	word[length] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;
	char	*start;
	char	*end;
	int		i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	array = malloc((word_count + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			end = (char *)s;
			array[i++] = make_word(start, end);
		}
		else
			s++;
	}
	array[i] = NULL;
	return (array);
}

/*
int main(void)
{
    char **result;
    char *input = "*hello*fellow***students*";
    int i;

    result = ft_split(input, '*');
    if (result == NULL)
    {
        printf("Failed to allocate memory for split result.\n");
        return 1;
    }

    i = 0;
    while (result[i])
    {
        printf("Result[%d]: %s\n", i, result[i]);
        free(result[i]); // Free each string
        i++;
    }
    free(result); // Free the array of strings

    return 0;
}
*/