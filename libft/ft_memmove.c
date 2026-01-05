/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:14:40 by tswong            #+#    #+#             */
/*   Updated: 2025/12/02 15:42:04 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp_dest;
	const char	*temp_src;
	size_t		i;

	temp_dest = dest;
	temp_src = src;
	if (temp_dest < temp_src)
	{
		i = 0;
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	else if (temp_dest > temp_src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			temp_dest[i] = temp_src[i];
		}
	}
	return (dest);
}

/*
memmove VS memcpy
memmove solves the problem that if destination and source of memcpy overlap,
the source may be overwritten.
if memory address of dest < memory address of src:
	copy from front to back (forward)
if memory address of src < memory address of dest:
	copy from back to front (backward)
if memory address of src = memory address of dest:	
	Do nothing, because result will be the same after copying
*/