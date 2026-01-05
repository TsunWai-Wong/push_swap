/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:10:06 by tswong            #+#    #+#             */
/*   Updated: 2025/12/03 17:00:14 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
c == null -> return null terminator of s
comparing int vs char -> convert c to unsigned char first
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char) c;
	while (s[i])
	{
		if (s[i] == uc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == uc)
		return ((char *) &s[i]);
	return (NULL);
}
