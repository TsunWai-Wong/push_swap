/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:11:48 by tswong            #+#    #+#             */
/*   Updated: 2025/12/05 12:23:09 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp_lst;

	i = 0;
	temp_lst = lst;
	while (temp_lst)
	{
		i++;
		temp_lst = temp_lst->next;
	}
	return (i);
}
