#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdio.h> ///////DELETE////////

void	*	ft_memcpy(void * dst, const void * src, size_t n);


void	*	ft_memmove(void *s1, const void *s2, size_t n);
void	*	memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
#endif