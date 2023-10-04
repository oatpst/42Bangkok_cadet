/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:22 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:04:12 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*srcn;
	char		*dstn;

	i = 0;
	srcn = (const char *)src;
	dstn = (char *)dst;
	if (!(dstn) && !(srcn))
		return (NULL);
	if (srcn > dstn)
	{
		while (i < len)
		{
			dstn[i] = srcn[i];
			i++;
		}
	}
	else
	{
		while (len-- != 0)
			dstn[len] = srcn[len];
	}
	return (dstn);
}

// #include <string.h>
// int	main()
// {
// 	const void	*s1 = "Hello World";
// 	void	*s2;
// 	void	*s3;

// 	s2 = malloc(sizeof(char) * 12);
// 	s3 = malloc(sizeof(char) * 12);
// 	ft_memmove(s2, s1, 12);
// 	ft_memcpy(s3, s1, 12);
// 	ft_putstr_fd(s2, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(s3, 1);
// 	free(s2);
// 	free(s3);
// }

// #include <string.h>
// int	main()
// {
// 	char	*s2;
// 	void	*d;
// 	void	*s;

// 	s2 = malloc(sizeof(char) * 12);
// 	s2[0] = 'H';
// 	s2[1] = 'e';
// 	s2[2] = 'l';
// 	s2[3] = '\0';
// 	d = s2 + 1;
// 	s = s2;
// 	ft_memmove(d, s, 12);
// 	ft_putstr_fd(d, 1);
// 	free(s2);
// }