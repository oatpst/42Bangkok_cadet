/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:58:51 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:58:26 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

// int	main()
// {
// 	t_list	*lst = ft_lstnew("Test");
// 	t_list	*front = ft_lstnew("Add front and ");
// 	printf("%s\n", lst->content);
// 	printf("%s\n", front->content);
// 	ft_lstadd_front(&lst, front);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		lst = lst->next;
// 	}
// }