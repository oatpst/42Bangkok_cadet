/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:42:51 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 18:57:46 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_numlen(long nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	size_t	num_len;
	size_t	i;
	long	nb;
	char	*res;

	nb = n;
	num_len = str_numlen(nb);
	res = malloc(sizeof(char) * (num_len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
		nb = -nb;
	while (i < num_len)
	{
		res[num_len - i - 1] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	if (n < 0)
		*res = '-';
	res[num_len] = '\0';
	return (res);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_itoa(-321354363));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(12));
// 	printf("%s\n", ft_itoa(-2147483648));
// }