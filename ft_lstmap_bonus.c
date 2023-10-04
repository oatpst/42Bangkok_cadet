/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:59:01 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:01:40 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!(f) || !(del))
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!(new_node))
		{
			del(content);
			if (new_lst)
				ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// void	*ft_toupper_lst(void *str)
// {
// 	size_t	i = 0;
// 	char	*s = (char *)str;

// 	while (s[i])
// 	{
// 		if (97 <= s[i] && s[i] <= 122)
// 		{
// 			s[i] = s[i] - 32;
// 		}
// 		i++;
// 	}
// 	return (str);
// }

// void	ft_bzero_lst(void *s)
// {
// 	unsigned char	*str;
// 	size_t	n = ft_strlen((const char *)s);

// 	str = ((unsigned char *)s);
// 	while (n--)
// 	{
// 		*str = 0;
// 		str++;
// 	}
// }

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
// 	t_list	*new = ft_lstmap(lst, ft_toupper_lst, ft_bzero_lst);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		lst = lst->next;
// 	}
// 	while (new)
// 	{
// 		ft_putstr_fd(new->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		new = new->next;
// 	}
// }