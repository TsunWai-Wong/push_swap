/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:03:29 by tswong            #+#    #+#             */
/*   Updated: 2025/12/03 17:23:21 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char) c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == uc)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == uc)
		return ((char *) &s[i]);
	return (NULL);
}
