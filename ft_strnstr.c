/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:40 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/03 03:01:20 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p;
	char	*p_end;
	size_t	needle_len;

	p = (char *)haystack;
	p_end = (char *)haystack + len;
	needle_len = strlen(needle);
	if (needle == 0)
		return ((char *)haystack);
	p_end -= (needle_len - 1);
	while (++p < p_end)
	{
		if (ft_strncmp(p, needle, needle_len) == 0)
			return (p);
	}
	return (NULL);
}
