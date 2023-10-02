/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:20 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/03 03:00:29 by pwanakit         ###   ########.fr       */
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
