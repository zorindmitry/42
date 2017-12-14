/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:02:49 by dzorin            #+#    #+#             */
/*   Updated: 2017/11/22 17:02:51 by dzorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t  a;
    size_t  b;
    a = 0;
    if (!*s2 && !*s1)
    {
        return ((char *)s1);
    }
    while (s1[a] && (a < len))
    {
        b = 0;
        while (s2[b] == s1[a + b] && s2[b] &&
                s1[a + b] && ((a + b) < len))
            b++;
        if (!s2[b])
            return ((char *)&s1[a]);
        a++;
    }
    return (0);
}
