/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 17:32:01 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/29 17:32:03 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		len--;
		i++;
	}
	if (len <= 0)
		len = 0;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] != '\0' && j < len)
		res[j++] = s[i++];
	res[j] = '\0';
	return (res);
}
