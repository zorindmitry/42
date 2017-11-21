/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:20:41 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/21 13:20:44 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

void * ft_memccpy(void * dst, const void * src, int c, size_t n)
{
size_t i;
i = 0;

int count;
count = 1;
while (i < n && count)
{
	if (((char *)src)[i] == c)
		count--;
	((char *)dst)[i] = ((char *)src)[i];
}
return (void *)dst;
}

int main()
{
   unsigned char src[15]="12343557567890";

   unsigned char dst[15]="";

   memccpy (dst, src,'5', 10);

   printf ("dst: %s\n",dst);

   printf ("\n");

  unsigned char src1[15]="12343557567890";

   unsigned char dst1[15]="";

   memccpy (dst1, src1,'5', 10);

   printf ("dst1: %s\n",dst);
}
