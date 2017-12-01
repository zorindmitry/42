/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:31:24 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/29 19:31:25 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int length_one_word (char *s, char c)
{
	int len;

	len = 0;
	//whie (*s == c)
	//	s++;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}
int count_words(char *s, char c)
{
	int num;
	int i;

	num = 0;
	i = 0;
	while(s[i] == c )
		i++;
	while(s[i] != '\0')
	{
		while(s[i] != c)
			i++;
		num++;
		while(s[i] == c)
			i++;
	}
	return (num);
}	

char	**ft_strsplit(char const *s, char c)
{
	char **res;
	char *in_res;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if(!(res = (char **)malloc(sizeof(char *) * (count_words((char*)s, c) + 1))))
		return (NULL);

	while (*s)
	{
		while (*s == c)
			s++;
		if(!(res[j] = (char *)malloc(sizeof(char) * length_one_word((char *)s, c) + 1)))
			return (NULL);
		printf("len words: %d\n", length_one_word((char *)s, c));
		
		k = 0;
		while (*s && *s != c)
		{
			res[j][k] = *s;
			printf("%c\n", res[j][k]);
			k++;
			s++;
		}
		res[j][k] = '\0';
		j++;
	}
	return (res);
}


int					main(void)
{
	int i = 0;
	int k = 0;
	int j = 0;
	char s[] = "-qwe-asd--zx-zxc";
	char c = '-';

	printf("num words :%d\n", count_words(s, c));
	char **res_s = ft_strsplit(s, c);
	while(res_s[i] != '\0')  ///s[i][k];
	{	
		j = 0;
		while (res_s[i][j] !='\0')
		{
			printf("%c",res_s[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}