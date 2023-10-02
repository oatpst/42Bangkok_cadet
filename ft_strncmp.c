/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:38 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/02 19:44:20 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_n;
	unsigned char	*s2_n;

	i = 0;
	s1_n = (unsigned char *) s1;
	s2_n = (unsigned char *) s2;
	while ((s1_n[i] || s2_n[i]) && i < n)
	{
		if (s1_n[i] != s2_n[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
