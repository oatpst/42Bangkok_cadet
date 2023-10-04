/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:55 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:08:48 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*str;

	if (!(s))
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
	{
		start = s_len;
		len = 0;
	}
	else if (len >= s_len - start)
	{
		len = s_len - start;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s + start, len + 1);
	return (str);
}

// int	main()
// {
// 	ft_putstr_fd(ft_substr("Hello", 2, 2), 1);
// }