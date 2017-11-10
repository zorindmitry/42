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
		ft_bzero(c+3, 0);
		printf("start:%s",c);
		printf("\n");
	}
