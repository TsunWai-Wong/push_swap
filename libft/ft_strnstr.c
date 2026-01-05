/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:49:40 by tswong            #+#    #+#             */
/*   Updated: 2025/12/05 11:05:14 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outer while loop: loop over every character in the string
Inner while loop: loop over the pattern
*/

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (pattern[j] == '\0')
		return ((char *) str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && str[i + j] == pattern[j] && i + j < len)
		{
			j++;
			if (pattern[j] == '\0')
				return ((char *)(&str[i]));
		}
		i++;
	}
	return (NULL);
}
