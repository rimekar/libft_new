/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkarout <rkarout>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:49:29 by rkarout           #+#    #+#             */
/*   Updated: 2024/06/03 19:58:04 by rkarout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			i++;
		}
	}
	return (count);
}

static char	*malloc_word(char const *s, char c)
{
	char	*word;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof (char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_tab(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;

	words = count_words(s, c);
	tab = (char **)malloc((words + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = malloc_word(s, c);
			if (!tab[i])
				return (free_tab(tab, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
