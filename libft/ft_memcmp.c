/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:34:08 by tswong            #+#    #+#             */
/*   Updated: 2025/12/03 18:28:23 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
} */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	if (n == 0)
		return (0);
	temp_s1 = (unsigned char *) s1;
	temp_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n - 1 && temp_s1[i] == temp_s2[i])
		i++;
	return (temp_s1[i] - temp_s2[i]);
}
