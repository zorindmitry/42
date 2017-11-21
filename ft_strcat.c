/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:08:24 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/21 18:08:26 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		len1;
	int		len2;
	char	*res_str;
	int i;
	int i1;

	i = 0;
	i1 = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	res_str = (char *)malloc(len2 + len1 + 1);
	while (i < len1)
	{
		res_str[i] = s1[i1];
		i++;
		i1++;
	}
	i1 = 0;
	while (i1 < len2)
	{
		res_str[i] = s2[i1];
		i++;
		i1++;
	}
	return (res_str);
}

int main()
{
	char a[10] = "asd";
	char b[10] = "qwe";
	char * c = strcat(a, b);
	printf("%s\n",c);
	char a1[10] = "asd";
	char b1[10] = "qwe";
	char * c1 = ft_strcat(a1, b1);
	printf("%s\n",c1);
}
