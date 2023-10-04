/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:38 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:07:55 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp( const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_n;
	unsigned char	*s2_n;

	i = 0;
	s1_n = (unsigned char *)s1;
	s2_n = (unsigned char *)s2;
	while ((s1_n[i] || s2_n[i]) && i < n)
	{
		if (s1_n[i] != s2_n[i])
			return (s1_n[i] - s2_n[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// int	main()
// {
// 	char	*a = "123459";
// 	char	*b = "123456";
// 	ft_putnbr_fd(ft_strncmp(a,b,ft_strlen(a)), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_strncmp(a,b,2), 1);
// }