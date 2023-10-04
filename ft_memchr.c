/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:16 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:02:53 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	c1;

	p = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == c1)
			return (p + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main()
// {
// 	const	void	*s = "Hello World";
// 	unsigned char	*r = ft_memchr(s, 'l', strlen((const char*)s));
// 	printf("%s", r);
// }