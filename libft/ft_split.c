/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:57:41 by tswong            #+#    #+#             */
/*   Updated: 2025/11/25 16:28:08 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// int	ft_strlcpy(char *dest, char *src, int n);

static int	word_count(char const *s, char c)
{
	int	result;
	int	inside_word;

	result = 0;
	inside_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!inside_word)
			{
				result += 1;
				inside_word = 1;
			}
		}
		else
			inside_word = 0;
		s++;
	}
	return (result);
}

static int	array_malloc(char **array, int position, int word_len)
{
	int	i;

	i = 0;
	array[position] = malloc((word_len + 1) * sizeof(char));
	if (array[position] == NULL)
	{
		while (i < position)
		{
			free(array[i]);
			i++;
		}
		free(array);
		return (1);
	}
	return (0);
}

static int	fill_array(char const *s, char c, char **array)
{
	int	i;
	int	word_len;

	i = 0;
	while (*s)
	{
		word_len = 0;
		while (*s == c)
			s++;
		while (*s && *s != c)
		{
			word_len ++;
			s++;
		}
		if (word_len > 0)
		{
			if (array_malloc(array, i, word_len))
				return (1);
			ft_strlcpy(array[i], s - word_len, word_len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		array_len;
	char	**result;

	array_len = word_count(s, c);
	result = malloc((array_len + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	result[array_len] = NULL;
	if (fill_array(s, c, result))
		return (NULL);
	return (result);
}
