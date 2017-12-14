/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:02:49 by dzorin            #+#    #+#             */
/*   Updated: 2017/12/14 19:35:04 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*s2 && !*s1)
	{
		return ((char *)s1);
	}
	while (s1[i] && (i < len))
	{
		j = 0;
		while (s2[j] == s1[i + j] && s2[j] &&
				s1[i + j] && ((i + j) < len))
			j++;
		if (!s2[j])
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
