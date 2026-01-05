/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:49:23 by tswong            #+#    #+#             */
/*   Updated: 2025/12/05 13:55:13 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, int (*f)(int))
{
	t_list	*temp_lst;

	temp_lst = lst;
	while (temp_lst)
	{
		f(temp_lst->content);
		temp_lst = temp_lst->next;
	}
}
