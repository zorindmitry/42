/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:24:34 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/21 14:24:37 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	tmp[n];

	ft_memcpy(tmp, s2, n);
	ft_memcpy(s1, tmp, n);
	return (s1);
}

int main()
{
unsigned char src[15]="12343557567890";

unsigned char dst[15]="";
memmove(dst, src, 3);
printf("%s\n",dst);


unsigned char src1[15]="12343557567890";

unsigned char dst1[15]="";
ft_memmove(dst1, src1, 3);
printf("%s\n",dst1);
return 0;
}
