/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:51 by pwanakit          #+#    #+#             */
/*   Updated: 2023/09/13 18:48:07 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	match(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*s2;

	i = 0;
	start = 0;
	if (!(s1) || !(set))
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && match(set, s1[start]))
		start++;
	while (end > start && match(set, s1[end - 1]))
		end--;
	s2 = malloc(sizeof(char) * (end - start + 1));
	if (s2 == NULL)
		return (NULL);
	while (start < end)
	{
		s2[i++] = s1[start++];
	}
	s2[i] = '\0';
	return (s2);
}
