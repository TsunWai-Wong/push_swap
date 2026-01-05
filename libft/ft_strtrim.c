/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:44:00 by tswong            #+#    #+#             */
/*   Updated: 2025/12/03 16:23:48 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	count_left(char const *s1, char const *set)
{
	int	result;

	result = 0;
	while (*s1 && is_in_set(*s1, set))
	{
		s1++;
		result++;
	}
	return (result);
}

static int	count_right(char const *s1, char const *set)
{
	int	result;
	int	str_len;

	result = 0;
	str_len = ft_strlen(s1) - 1;
	while (str_len >= 0 && s1[str_len] && is_in_set(s1[str_len], set))
	{
		str_len--;
		result++;
	}
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		left_len;
	int		result_len;
	char	*result;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	left_len = count_left(s1, set);
	result_len = ft_strlen(s1) - left_len - count_right(s1, set) + 1;
	if (result_len < 1)
		return (ft_strdup(""));
	result = malloc(result_len * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < result_len - 1)
	{
		result[i] = s1[left_len + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
