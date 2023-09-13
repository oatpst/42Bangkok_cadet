/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:59:03 by pwanakit          #+#    #+#             */
/*   Updated: 2023/09/13 18:18:18 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	if (new_lst == NULL)
		return (NULL);
	if (new_lst)
	{
		new_lst->content = content;
		new_lst->next = NULL;
	}
	return (new_lst);
}