/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:18 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:03:43 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1n;
	unsigned char	*s2n;

	s1n = (unsigned char *)(s1);
	s2n = (unsigned char *)(s2);
	i = 0;
	while (i < n)
	{
		if (s1n[i] != s2n[i])
			return (s1n[i] - s2n[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// int	main()
// {
// 	const void	*s1 = "Hello World";
// 	const void	*s2 = "Hello world";
// 	ft_putnbr_fd(ft_memcmp(s1, s2, ft_strlen((const char *)s1)), 1);
// 	ft_putnbr_fd(memcmp(s1, s2, ft_strlen((const char *)s1)), 1);
// }