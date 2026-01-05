/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:58:00 by tswong            #+#    #+#             */
/*   Updated: 2025/12/05 14:56:22 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), int (*del)(int))
{
	t_list	*result;
	t_list	*new_node;
	int		new_content;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new_node);
		lst = lst->next;
	}
	return (result);
}
