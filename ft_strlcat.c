/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:55:00 by dzorin            #+#    #+#             */
/*   Updated: 2017/12/14 18:34:49 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	int		j;
	size_t	len_s2;

	i = 0;
	j = 0;
	len_s2 = ft_strlen(s2);
	while (s1[i] && i < size)
		i++;
	while (s2[j] && (i + j + 1) < size)
	{
		s1[i + j] = s2[j];
		j++;
	}
	if (i != size)
		s1[i + j] = '\0';
	return (i + len_s2);
}
