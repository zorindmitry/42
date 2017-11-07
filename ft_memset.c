/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 17:00:51 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/02 17:00:54 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
void *ft_memset(void *b, int c, size_t len)
{
	int i;
	i = 0;
	while(len--)
	{
		((unsigned char *)b)[i++]= (unsigned char)c;
	}
	return ((void*)b);
}

int main (void)
{
   // Исходный массив
	unsigned char src[15]="1234567890";
	printf ("src: %s\n",src);
   // Заполняем массив символом ‘1’
	memset (src, '1', 8);

   // Вывод массива src на консоль
	printf ("src: %s\n",src);
	ft_memset (src, '2', 9);
	
   // Вывод массива src на консоль
	printf ("src: %s\n",src);
   return 0;
}