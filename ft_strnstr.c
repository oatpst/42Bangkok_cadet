/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:40 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:08:08 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char	*haystack = "Hello is it me you looking";
// 	char	*needle = "is it";
// 	ft_putstr_fd(ft_strnstr(haystack, needle, ft_strlen(haystack)), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(strnstr(haystack, needle, ft_strlen(haystack)), 1);
// 	ft_putchar_fd('\n', 1);
// 	printf("%s", ft_strnstr(haystack, needle, 10));
// 	ft_putchar_fd('\n', 1);
// 	printf("%s", strnstr(haystack, needle, 10));
// }