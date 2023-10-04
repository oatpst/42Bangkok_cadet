/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:20 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:03:57 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*srcn;
	unsigned char		*dstn;

	srcn = (const unsigned char *)src;
	dstn = (unsigned char *)dst;
	if (!(srcn) && !(dstn))
		return (NULL);
	while (n--)
		*dstn++ = *srcn++;
	return (dst);
}

// #include <string.h>
// int	main()
// {
// 	const void	*s1 = "Hello World";
// 	void	*s2;
// 	void	*s3;

// 	s2 = malloc(sizeof(char) * 12);
// 	s3 = malloc(sizeof(char) * 12);
// 	ft_memcpy(s2, s1, 12);
// 	ft_memcpy(s3, s1, 12);
// 	ft_putstr_fd(s2, 1);
// 	ft_putstr_fd(s3, 1);
// 	free(s2);
// 	free(s3);
// }