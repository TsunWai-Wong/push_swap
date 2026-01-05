/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:43:17 by tswong            #+#    #+#             */
/*   Updated: 2025/11/25 17:15:20 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer_memory, int constant_byte, size_t num);

void	ft_bzero(void *buffer_memory, size_t n)
{
	ft_memset(buffer_memory, 0, n);
}
