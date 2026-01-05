/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:54:34 by tswong            #+#    #+#             */
/*   Updated: 2025/12/03 16:20:07 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_strlen(int n)
{
	int				i;
	unsigned int	num;

	i = 0;
	if (n < 0)
	{
		i += 1;
		num = -n;
	}
	else
		num = n;
	while (num > 0)
	{
		num /= 10;
		i += 1;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*result;
	unsigned int	num;

	if (n == 0)
		return (ft_strdup("0"));
	i = num_strlen(n);
	result = malloc((i + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		num = -n;
		result[0] = '-';
	}
	else
		num = n;
	result[i] = '\0';
	while (num > 0)
	{
		i--;
		result[i] = num % 10 + '0';
		num /= 10;
	}
	return (result);
}
