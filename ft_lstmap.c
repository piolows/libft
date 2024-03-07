/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolinta <ppolinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:52:33 by ppolinta          #+#    #+#             */
/*   Updated: 2023/11/04 11:24:27 by ppolinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	size_t	count;
	t_list	*initial;

	count = ft_lstsize(lst);
	initial = NULL;
	while (count--)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstdelone(new, del);
			return (initial);
		}
		ft_lstadd_back(&initial, new);
		new = new->next;
		lst = lst->next;
	}
	return (initial);
}
