/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:42 by pwanakit          #+#    #+#             */
/*   Updated: 2023/09/11 17:56:41 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p_char;

	p_char = NULL;
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == (char)(c))
		{
			p_char = (char *)s;
		}
		s++;
	}
	return (p_char);
}
