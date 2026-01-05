/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:45:02 by tswong            #+#    #+#             */
/*   Updated: 2025/11/25 17:18:06 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	dst_len;
	size_t	src_len;
	int		spot_left;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	spot_left = size - dst_len - 1;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && spot_left)
	{
		dst[dst_len + i] = src[i];
		i++;
		spot_left--;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
