/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:57:04 by tswong            #+#    #+#             */
/*   Updated: 2025/12/03 18:20:00 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Convert to unsigned char to handle extended ASCII and negative chars
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	if (n == 0)
		return (0);
	us1 = (unsigned char *) s1;
	us2 = (unsigned char *) s2;
	i = 0;
	while (us1[i] && us2[i] && i < n - 1 && us1[i] == us2[i])
		i++;
	return (us1[i] - us2[i]);
}
