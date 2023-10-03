/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:16:52 by pwanakit          #+#    #+#             */
/*   Updated: 2023/10/03 16:23:19 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/*#include <stdio.h>
int	main(void)
{
	printf("User   result :\n");
	printf("%d\n",ft_atoi(" ---+--+1234ab567"));
	printf("%d\n",ft_atoi(" \n\r\t\f\v -+-+-+--2147483648"));
	printf("%d\n",ft_atoi("-12345+2"));
	printf("%d\n",ft_atoi(""));
	printf("%d\n",ft_atoi("++- 123"));
	printf("%d\n",ft_atoi(" a123"));
	printf("%d\n",ft_atoi("\t--123456789a"));
	printf("%d\n",ft_atoi(" --++--2147483647"));
	return (0);
}*/