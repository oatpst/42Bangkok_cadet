/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:22 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 17:23:45 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			i++;
		while (*str && *str != c)
			str++;
	}
	return (i);
}

static int	ft_free(int i, char **splt)
{
	int	j;

	j = 0;
	if (!splt[i])
	{
		while (splt[j])
		{
			free(splt[j]);
			j++;
		}
		free(splt);
		return (0);
	}
	return (1);
}

static int	ft_len(char const *str, char c)
{
	size_t	len;

	if (ft_strchr(str, c))
		len = ft_strchr(str, c) - str;
	else
		len = ft_strlen(str);
	return (len);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	len;
	char	**split;

	i = 0;
	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !split)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len = ft_len(s, c);
			split[i++] = ft_substr(s, 0, len);
			if (ft_free(i - 1, split) == 0)
				return (NULL);
			s += len;
		}
	}
	split[i] = NULL;
	return (split);
}
