/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:11 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:56:55 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isdigit('a'), isdigit('a'));
// 	printf("%d and %d\n", ft_isdigit('Z'), isdigit('Z'));
// 	printf("%d and %d\n", ft_isdigit(-69), isdigit(-69));
// 	printf("%d and %d\n", ft_isdigit(' '), isdigit(' '));
// 	printf("%d and %d\n", ft_isdigit(0), isdigit(0));
// 	printf("%d and %d\n", ft_isdigit('1'), isdigit('1'));
// 	printf("%d and %d\n", ft_isdigit('\n'), isdigit('\n'));
// 	printf("%d and %d\n", ft_isdigit(-1), isdigit(-1));
// 	printf("%d and %d\n", ft_isdigit(9), isdigit(9));
// 	printf("%d and %d\n", ft_isdigit('6'), isdigit('6'));
// }