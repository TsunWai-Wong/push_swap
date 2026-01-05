/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:40:44 by tswong            #+#    #+#             */
/*   Updated: 2025/12/03 14:24:49 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		str_len;
	char	*dest;

	i = 0;
	str_len = ft_strlen(s);
	dest = malloc((str_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < str_len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[str_len] = '\0';
	return (dest);
}
