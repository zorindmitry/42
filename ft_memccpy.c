/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:20:41 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/22 14:47:26 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	int		count;

	i = 0;
	count = 1;
	while (i < n && count)
	{
		if (((char *)src)[i] == c)
			count--;
		((char *)dst)[i] = ((char *)src)[i];
	}
	return (void *)dst;
}
