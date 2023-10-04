/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:43 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:07:20 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	s2 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// char	ft_toupper_mapi(unsigned int i, char s)
// {
// 	if (97 <= s && s <= 122)
// 	{
// 		s = s - 32;
// 	}
// 	return (s);
// }

// int	main()
// {
// 	char	*s = "Hello";
// 	char	*r = ft_strmapi(s, ft_toupper_mapi);
// 	ft_putstr_fd(r, 1);
// }