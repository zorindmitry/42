/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:29:37 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/24 13:29:38 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (res)
	{
		while (s[i] != '\0')
		{
			res[i] = f(i, s[i]);
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
