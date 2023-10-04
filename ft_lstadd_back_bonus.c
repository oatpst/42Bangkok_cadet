/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:56:55 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:58:11 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
		*lst = new;
}

// int	main()
// {
// 	t_list	*lst = ft_lstnew("Hello ");
// 	t_list	*new = ft_lstnew("World");
// 	ft_lstadd_back(&lst, new);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		lst = lst->next;
// 	}
// }