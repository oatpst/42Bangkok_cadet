/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:34 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:06:48 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (!(src) && !(dstsize))
		return (0);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <string.h>
// int	main()
// {
// 	const char	*src = "Hello is it me you looking for";
// 	char	*dst = malloc(sizeof(char) * 9);
// 	char	*dst2 = malloc(sizeof(char) * 9);
// 	ft_putnbr_fd(ft_strlen(src), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_strlcpy(dst, src, 9), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(strlcpy(dst2, src, 9), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(dst, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(dst2, 1);
// 	free(dst);
// 	free(dst2);
// }