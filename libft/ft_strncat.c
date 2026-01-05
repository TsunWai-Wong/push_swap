/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:38:48 by tswong            #+#    #+#             */
/*   Updated: 2025/11/25 17:07:28 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strncat(char *dest, char *src, int num)
{
	int		i;
	size_t	str_len;

	i = 0;
	str_len = ft_strlen(dest);
	while (src[i] && i < num)
	{
		dest[str_len + i] = src[i];
		i++;
	}
	dest[str_len + i] = '\0';
	return (dest);
}
