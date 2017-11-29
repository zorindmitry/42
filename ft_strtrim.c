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
	int j;
	if (!s)
		return (NULL);
	j = 0;
	i = 0;
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
	if(!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s = s + i;
	while (s[i] != '\0' && j < len)
	{
		res[j] = s[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}

int					main(void)
{
	char			str[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
	char			str2[] = "Bonjour";
	char			str3[] = "  \t\t\t   ";
	char			*r;

	//ft_strtrim(NULL);
	r = ft_strtrim(str);
	if (strcmp(r, "Bon\t \njour"))
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t    \t\nBon\t \njour\t\n  \n     \").\nExpected ret = \"Bon\t \njour\" \
			   but have ret = \"%s\"\033[0m\n", __LINE__ - 2, __func__, r);
		free(r);
		return (0);
	}
	free(r);
	r = ft_strtrim(str2);
    if (strcmp(r, "Bonjour") || (str2 == r))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"Bonjour\").\nExpected ret = \"Bonjour\" and differents pointers\
			   but have ret = \"%s\" and our: %p / your: %p\033[0m\n", __LINE__ - 2, __func__, r, str2, r);
		free(r);
        return (0);
    }
    free(r);
	r = ft_strtrim(str3);
    if (strcmp(r, "") || (str3 == r))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t\t\t  \").\nExpected ret = \"\" and different\
s pointers but have ret = \"%s\" and our: %p / your: %p\033[0m\n", __LINE__ - 2, __func__, r, str3, r);
		free(r);
        return (0);
    }
    free(r);
	return (1);
}