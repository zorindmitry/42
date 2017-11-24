#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	if (s == NULL || f == NULL)
		return ;
	while (s != NULL && *s)
		f(s++);
}

void			uf_striter_callback(char *s)
{
	*s = *s + 1;
}

int				main(void)
{
	char		str[] = "Hello";

	ft_striter(NULL, NULL);
	ft_striter(str, NULL);
	ft_striter(str, uf_striter_callback);
	printf("%s\n",str);
	return (1);
}