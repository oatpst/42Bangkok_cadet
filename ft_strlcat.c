/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:31 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:06:33 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	src_len = ft_strlen(src);
	while (!(dst) && dstsize == 0)
		return (src_len);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + src_len);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

// #include <string.h>
// int	main()
// {
// 	const char	*src = "Hello is it me you looking for";
// 	char	dst[50] = "Test";
// 	char	dst2[50] = "Test";
// 	ft_putnbr_fd(ft_strlen(src), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_strlcat(dst, src, 20), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(strlcat(dst2, src, 20), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(dst, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(dst2, 1);
// }