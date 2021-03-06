/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:31:24 by dzorin            #+#    #+#             */
/*   Updated: 2017/12/12 14:27:48 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(char const *str, char c)
{
	int		len;

	len = 0;
	while (*str != c && *str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

static int	countword(char const *str, char c)
{
	int		count_word;
	int		in_char;

	count_word = 0;
	in_char = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		if (in_char == 1 && *str == c)
			in_char = 0;
		if (in_char == 0 && *str != c)
		{
			in_char = 1;
			count_word++;
		}
		str++;
	}
	return (count_word);
}

char		**ft_strsplit(char const *s, char c)
{
	int		count_word;
	int		index;
	int		len;
	char	**arrfunc;

	index = 0;
	if (!s)
		return (0);
	count_word = countword(s, c);
	if (!(arrfunc = (char**)malloc(sizeof(char*) * count_word + 1)))
		return (NULL);
	while (count_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		len = wordlen(s, c);
		if (!(arrfunc[index] = ft_strncpy(ft_strnew(len), s, len)))
			return (NULL);
		s += len;
		index++;
	}
	arrfunc[index] = NULL;
	return (arrfunc);
}
