/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:52:02 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/15 17:52:06 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
void ft_bzero(void *s, size_t n)
{
	while(n > 0)
	{
		int i = 0;
		((unsigned char *)s)[i++] = '\0';
		n--;
	}
}
	int main()
	{
		char c[10] = "005esyu";
		printf("start:%s",c);
		printf("\n");
		ft_bzero(c+3, 1);
		printf("start:%s",c);
		printf("\n");
	}
