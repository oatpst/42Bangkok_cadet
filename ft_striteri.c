/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:30 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/04 19:06:06 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}

// void	ft_put_str(unsigned int i, char *s)
// {
// 	ft_putnbr_fd(i, 1);
// 	ft_putstr_fd(s, 1);
// 	ft_putchar_fd('\n', 1);
// }

// int	main()
// {
// 	char	*s = "Hello World";
// 	ft_striteri(s, ft_put_str);
// }