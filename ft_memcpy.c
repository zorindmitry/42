/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:54:48 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/15 18:22:22 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
	((char )*)dst[i]=((char)*)src[i];
	 dst++;
	 src++;
	 i++;
	}

}
int main()
{
	char c1[20] = "qwe";
	char c2 [10] = "awdasd";
	memcpy(c1, c2, 3);
	printf("%s",c1);
	return 0;
}
