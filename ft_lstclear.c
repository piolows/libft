/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolinta <ppolinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:30:01 by ppolinta          #+#    #+#             */
/*   Updated: 2023/11/03 19:30:02 by ppolinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*nexttemp;

	list = *lst;
	while (list)
	{
		nexttemp = list->next;
		ft_lstdelone(list, del);
		list = nexttemp;
	}
	*lst = NULL;
}
