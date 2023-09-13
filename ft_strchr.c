/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:27 by pwanakit          #+#    #+#             */
/*   Updated: 2023/09/11 17:59:48 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;
	char			*ptr;

	c1 = (unsigned char)c;
	ptr = (char *)s;
	while (*ptr != c1)
	{
		if (!(*ptr))
			return (NULL);
		ptr++;
	}
	return (ptr);
}
