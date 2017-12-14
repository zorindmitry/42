/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:24:35 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/23 14:24:37 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' '
		|| c == '+')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long long int	res;
	int				minus;

	res = 0;
	minus = 1;
	while (ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if ((res > 922337203685477580 ||
			(res == 922337203685477580 && (*str - '0') > 7)) && minus == 1)
			return (-1);
		else if ((res > 922337203685477580 ||
			(res == 922337203685477580 && (*str - '0') > 8)) && minus == -1)
			return (0);
		res = res * 10 + *str - '0';
		str++;
	}
	return (minus * res);
}
