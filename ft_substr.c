/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:55 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/03 03:01:27 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		n;
	char	*dst;
	int		i;

	i = start;
	n = len - start;
	if (!(s))
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (n + 1));
	if (dst == NULL)
		return (NULL);
	while (i++ < n && (*(s + i) != '\0'))
	{
		*dst = *(s + i);
		dst++;
	}
	*dst = '\0';
	return (dst - len);
}
