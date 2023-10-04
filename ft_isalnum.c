/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:16:50 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:55:04 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isalnum('a'), isalnum('a'));
// 	printf("%d and %d\n", ft_isalnum('Z'), isalnum('Z'));
// 	printf("%d and %d\n", ft_isalnum(' '), isalnum(' '));
// 	printf("%d and %d\n", ft_isalnum('1'), isalnum('1'));
// 	printf("%d and %d\n", ft_isalnum('\n'), isalnum('\n'));
// 	printf("%d and %d\n", ft_isalnum('.'), isalnum('.'));
// }