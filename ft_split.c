/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:22 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/03 16:36:28 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

char	**ft_free(char **splt)
{
	size_t	j;

	j = 0;
	while (splt[j])
	{
		free(splt[j]);
		j++;
	}
	free(splt);
	return (NULL);
}

char	*word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char));
	if (!(s) || !(split))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		if ((s[i] == c || i == ft_strlen(s)) && index > 0)
		{
			split[j++] = word_dup(s, index, i);
		}
		if (split[j++] == NULL)
			return (ft_free(split));
		i++;
	}
	split[j] = 0;
	return (split);
}
