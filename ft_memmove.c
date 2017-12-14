/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:24:34 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/21 14:24:37 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*tmp;
	char	*tmp2;

	tmp = (char *)s1;
	tmp2 = (char *)s2;
	if (tmp2 < tmp)
	{
		while (n--)
			tmp[n] = tmp2[n];
	}
	else
		ft_memcpy(tmp, tmp2, n);
	return (s1);
}
