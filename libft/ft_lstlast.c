/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:24:49 by tswong            #+#    #+#             */
/*   Updated: 2025/12/05 12:31:19 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_lst;

	if (lst == NULL)
		return (NULL);
	temp_lst = lst;
	while (temp_lst->next)
	{
		temp_lst = temp_lst->next;
	}
	return (temp_lst);
}
