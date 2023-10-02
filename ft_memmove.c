/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:22 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/03 03:00:34 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*srcn;
	char		*dstn;

	i = 0;
	srcn = (const char *)src;
	dstn = (char *)dst;
	if (!(dstn) && !(srcn))
		return (NULL);
	if (srcn > dstn)
	{
		while (i < len)
		{
			dstn[i] = srcn[i];
			i++;
		}
	}
	else
	{
		while (len-- != 0)
			dstn[len] = srcn[len];
	}
	return (dstn);
}
