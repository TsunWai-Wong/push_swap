/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:40:41 by tswong            #+#    #+#             */
/*   Updated: 2025/11/25 17:53:29 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_bzero(void *buffer_memory, size_t n);

void	*ft_calloc(size_t len, size_t size)
{
	void	*pointer;

	if (len == 0 || size == 0)
		return (malloc(0));
	pointer = malloc(len * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, len * size);
	return (pointer);
}
