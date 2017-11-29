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
	char *res;
	int len;
	int i;

	i = 0;
	len = ft_strlen(c);
	if (!s)
		return (NULL);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{ 
		i++;
		len--;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (j < len)
	{
		res[j] = s[i];
	}

int		main(void)
{
	char a[] = "   Hello   world   ";
	printf("%s\n", ft_strtrim(a));
	return 0;
}