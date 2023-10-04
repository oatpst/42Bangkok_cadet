/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:42 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:08:21 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	c1;
	char			*s_ptr;

	c1 = (unsigned char)c;
	s_ptr = (char *)s;
	i = ft_strlen(s);
	if (c1 == '\0')
		return (s_ptr + i);
	while (i)
		if (s[--i] == c1)
			return (s_ptr + i);
	return (NULL);
}

// int	main()
// {
// 	ft_putstr_fd(ft_strrchr("Hello World", 'l'), 1);
// }