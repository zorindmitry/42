/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:33:07 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/21 15:33:12 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*char_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	char_s = ((char *)s);
	while (i < n)
	{
		if (char_s[i] == (char)c)
			return (&char_s[i]);
		i++;
	}
	return (NULL);
}
