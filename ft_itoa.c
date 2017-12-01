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

int len_of_n(int n)
{
	int iter;
	while(n)
	{
		n = n / 10;
		iter++;
	}
	return (iter);
}

char *ft_mall(int n)
{
	char	*res;
	int		len;
	int i;

	i = n;

	len = len_of_n(n);
	int len_i = len;
	printf("%d\n", len);
	if (!(res = (char *)malloc((sizeof(char)) * (len + 1))))
		return (NULL);
	ft_memset(res, '0', len + 1);
	while (len > 0)
	{
		printf("%d\n", i);
		res[len--] = i%10 + '0';
		i = i/10;
		printf("%s\n",res);
	}

	return (res);
}

char	*ft_itoa(int n)
{
	char *res;

	if (n == -2147483648)
	{
		res = ft_strdup("-2147483648");
	}
	else if (n < 0)
	{
		printf("-1\n");
		res = ft_strcat("-",ft_mall(-n));
	}
	else if (n > 0)
	{
		printf("1\n");
		res = ft_strdup(ft_mall(n));
	}
	else
	{
		printf("2\n");
		res = ft_strdup("0");
	}
	return (res);
}

int main()
{
	
	int i = -214648;
	char *c = ft_itoa(i);
	printf("%s\n", c);
	return (0);
}









