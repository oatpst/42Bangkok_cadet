/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:07 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:56:38 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'A' && c <= 'Z'))
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isalpha('a'), isalpha('a'));
// 	printf("%d and %d\n", ft_isalpha('Z'), isalpha('Z'));
// 	printf("%d and %d\n", ft_isalpha(' '), isalpha(' '));
// 	printf("%d and %d\n", ft_isalpha('1'), isalpha('1'));
// 	printf("%d and %d\n", ft_isalpha('\n'), isalpha('\n'));
// 	printf("%d and %d\n", ft_isalpha('.'), isalpha('.'));
// }