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
