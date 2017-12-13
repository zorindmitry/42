/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:02:49 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/22 17:02:51 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	size_t	len_liti;
	char 	*bigi;
	char	*liti;

	i = 0;
	bigi = (char *)big;
	liti = (char *)little;

	if (!*bigi && !*liti)
		return ("");
	len_liti = ft_strlen(bigi);

	while (bigi[i] != '\0')
	{
		j = 0;
		while (liti[j] == bigi[i + j])
		{
			if (liti[j] == '\0' && len_liti < len)
				return (&bigi[i]);
			j++;
		}

		i++;
	}
	return (NULL);
}
