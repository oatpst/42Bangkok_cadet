/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:58:53 by pwanakit          #+#    #+#             */
/*   Updated: 2023/09/13 17:02:47 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*next;

	if ((!lst) || !(del))
		return ;
	cur = *lst;
	while (cur)
	{
		next = cur->next;
		(*del)(cur->content);
		free(cur);
		cur = next;
	}
	*lst = NULL;
}
