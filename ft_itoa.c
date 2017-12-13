/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:31:38 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/29 19:31:39 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_n(int n)
{
	int iter;

	iter = 0;
	while (n)
	{
		n = n / 10;
		iter++;
	}
	return (iter);
}

static void	check_minus(int *n, int *minus)
{
	if (*n < 0)
	{
		*n *= -1;
		*minus = 1;
	}
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		minus;

	minus = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	check_minus(&n, &minus);
	len = len_of_n(n) + minus;
	if (!(res = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	res[len] = '\0';
	len--;
	while (len >= 0)
	{
		res[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (minus > 0)
		res[0] = '-';
	return (res);
}
