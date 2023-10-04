/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:59:24 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:41:51 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *) s;
	i = 0;
	while (n--)
	{
		(s1)[i++] = '\0';
	}
}

/* #include <stdio.h>

int	main(void)
{
	char	str[50];
	strcpy(str, "Hello World, It's me.");
	char	str2[50];
	strcpy(str, "Hello World, It's me.");
	printf("%s\n", str);
	ft_bzero(str, 1);
	printf("%s\n", str);
	printf("%s\n", str2);
	bzero(str2, 1);
	printf("%s\n", str2);
	return (0);
}
*/