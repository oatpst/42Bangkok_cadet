/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:51 by pwanakit          #+#    #+#             */
/*   Updated: 2023/09/13 18:40:31 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	front;
	size_t	side;
	char	*str;

	if (!(s1) && !(set))
	{
		front = 0;
		side = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[side - 1] && ft_strchr(set, s1[side - 1]) && side > front)
			side++;
		str = (char *)malloc(sizeof(char) * (side - front + 1));
		if (str)
			ft_strlcpy(str, &s1[front], side - front + 1);
	}
	return (str);
}
