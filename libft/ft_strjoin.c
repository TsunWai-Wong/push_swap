/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:24:10 by tswong            #+#    #+#             */
/*   Updated: 2025/11/25 17:10:23 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*result;

	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		result[i] = *s1;
		s1++;
		i++; 
	}
	while (*s2)
	{
		result[i] = *s2;
		s2++;
		i++; 
	}
	result[i] = '\0';
	return (result);
}
