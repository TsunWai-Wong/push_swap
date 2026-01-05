/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:47:20 by tswong            #+#    #+#             */
/*   Updated: 2025/12/05 13:48:05 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, int (*del)(int))
{
	t_list	*next_node;

	while (*lst)
	{
		next_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
	free(*lst);
	*lst = NULL;
}
