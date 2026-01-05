/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:20:13 by tswong            #+#    #+#             */
/*   Updated: 2025/12/03 17:49:27 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp_s;
	unsigned char	uc;

	temp_s = (unsigned char *) s;
	uc = (unsigned char) c;
	while (n > 0)
	{
		if (*temp_s == uc)
			return (temp_s);
		temp_s++;
		n--;
	}
	return (NULL);
}
