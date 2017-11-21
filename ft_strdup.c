/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:10:05 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/21 17:10:09 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
