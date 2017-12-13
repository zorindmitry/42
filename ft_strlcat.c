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

#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_2	"there is no stars in the sky"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*cur;
	char 	*reader;
	size_t	len;

	cur = (char *)ft_memchr(dst, '\0', size);
	if (cur == NULL)
		return (size + ft_strlen(src));
	reader = (char *)src;
	len = (size_t)(cur - dst) + ft_strlen(reader);
	while ((size_t)(cur - dst) < size - 1 && *reader != '\0')
	{
		*cur = *reader;
		cur++;
		reader++;
	}
	*cur = '\0';
	return (len);
}




























/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t i;
	size_t j;
	size_t k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = size;

	while (dst[j] && j < size)
	{
		dst[i + j] = src[j];
		j++;
	dst[j + size] = '\0';
	return (j + size);
}

int main()
{
	char	*str = STRING_1;
	char	buff1[555] = STRING_2;
	char	buff2[555] = STRING_2;

	int r1 = strlcat(buff1, str, 4);
	int r2 = ft_strlcat(buff2, str, 4);

	printf("%s\n", buff1);
	printf("%s\n", buff2);
	printf("%d\n", r1);
	printf("%d\n", r2);

	return 0;
}

int main()
{
	char	s1[4] = "";
	char	s2[4] = "";
	//int r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
	int r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);


	printf("%s\n", s1);
	printf("%s\n", s2);
	//printf("%d\n", r1);
	printf("%d\n", r2);
	return 0;
}*/
