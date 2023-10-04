/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:59:05 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:02:01 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*node;

	size = 0;
	node = lst;
	while (node)
	{
		node = node->next;
		size++;
	}
	return (size);
}

// int	main(int argc, char **argv)
// {
// 	size_t	i = 0;
// 	t_list *lst = NULL;
// 	while (argc)
// 	{
// 		t_list	*new = ft_lstnew(argv[i]);
// 		ft_lstadd_back(&lst, new);
// 		i++;
// 		argc--;
// 	}
// 	ft_putstr_fd(ft_itoa(ft_lstsize(lst)), 1);
// }