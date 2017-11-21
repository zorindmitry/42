#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdio.h> ///////DELETE////////
# include <stdlib.h>
void	*	ft_memcpy(void * dst, const void * src, size_t n);


void	*	ft_memmove(void *s1, const void *s2, size_t n);
void	*	memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char * dst, const char * src);
char	*ft_strncpy(char * dst, const char * src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
#endif