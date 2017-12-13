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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	size_t	len_lit;

	i = 0;

	len_lit = ft_strlen(big);

	while (big[i] != '\0' && len_lit)
	{
		j = 0;
		while (little[j] == big[i + j])
		{
			if (little[j] == '\0' && len_lit < len)
				return ((char *)big);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char	*s1 = "oh no not the empty string !";
	char	*s2 = "oh no not the empty string !";
	size_t	max = strlen(s2);

	char	*i1 = strnstr(s1, s2, max);
	char	*i2 = ft_strnstr(s1, s2, max);
	printf("%s\n", i1);
	printf("%s\n", i2);
	return 0;
}
