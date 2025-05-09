/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:23:28 by skuhlcke          #+#    #+#             */
/*   Updated: 2025/04/29 17:25:10 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newlist)
{
	t_list	*lnode;

	if (!lst || !newlist)
		return ;
	if (*lst == NULL)
	{
		*lst = newlist;
		return ;
	}
	lnode = ft_lstlast(*lst);
	lnode->next = newlist;
}
