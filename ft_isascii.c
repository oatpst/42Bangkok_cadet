/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:09 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:55:48 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isascii('a'), isascii('a'));
// 	printf("%d and %d\n", ft_isascii('Z'), isascii('Z'));
// 	printf("%d and %d\n", ft_isascii(-69), isascii(-69));
// 	printf("%d and %d\n", ft_isascii(' '), isascii(' '));
// 	printf("%d and %d\n", ft_isascii(0), isascii(0));
// 	printf("%d and %d\n", ft_isascii('1'), isascii('1'));
// 	printf("%d and %d\n", ft_isascii('\n'), isascii('\n'));
// 	printf("%d and %d\n", ft_isascii(-1), isascii(-1));
// 	printf("%d and %d\n", ft_isascii(9), isascii(9));
// }