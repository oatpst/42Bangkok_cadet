/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:58:59 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:00:23 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	while (node && node->next)
		node = node->next;
	return (node);
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
// 	t_list *test = ft_lstlast(lst);
// 	while (test)
// 	{
// 		ft_putstr_fd(test->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		test = test->next;
// 	}
// }