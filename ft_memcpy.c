/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:54:48 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/21 13:15:08 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return ((void *)dst);
}

int main()
{
	char c1[20] = "qwe";
	char c2 [10] = "awdasd";
	memcpy(c1, c2, 3);
	printf("%s",c1);

	printf("\n");

	char c3[20] = "qwe";
	char c4 [10] = "awdasd";
	ft_memcpy(c3, c4, 3);
	printf("%s",c3);
	return 0;
}
