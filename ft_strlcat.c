/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:55:00 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/22 14:55:02 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
		k++;
	}
	while (src[j] != '\0' && j < size)
	{
		dst[i + j] = src[j];
		j++;
		k++;
	}
	dst[i + j] = '\0';
	return (k);
}
