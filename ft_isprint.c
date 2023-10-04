/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:13 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:57:07 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isprint('a'), isprint('a'));
// 	printf("%d and %d\n", ft_isprint('Z'), isprint('Z'));
// 	printf("%d and %d\n", ft_isprint(-69), isprint(-69));
// 	printf("%d and %d\n", ft_isprint(' '), isprint(' '));
// 	printf("%d and %d\n", ft_isprint(0), isprint(0));
// 	printf("%d and %d\n", ft_isprint('1'), isprint('1'));
// 	printf("%d and %d\n", ft_isprint('\n'), isprint('\n'));
// 	printf("%d and %d\n", ft_isprint(-1), isprint(-1));
// 	printf("%d and %d\n", ft_isprint(9), isprint(9));
// 	printf("%d and %d\n", ft_isprint('6'), isprint('6'));
// }