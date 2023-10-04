/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:01 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:47:30 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	p = malloc (count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

/* #include <stdio.h>
int	main(void)
{
	str[50];
	printf("%d", ft_calloc(10, 10));
	printf("%d", calloc(10, 10));
}
*/