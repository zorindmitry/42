

/////ft_memccpy/////

int main()
{
   unsigned char src[15]="12343557567890";
   unsigned char dst[15]="";
   memccpy (dst, src,'5', 10);
   printf ("dst: %s\n",dst);
   printf ("\n");
   unsigned char src1[15]="12343557567890";
   unsigned char dst1[15]="";
   memccpy (dst1, src1,'5', 10);
   printf ("dst1: %s\n",dst);
}



int main()
{
	char a[10] = "qwe";
	char b[10] = "asd";
	char * c = strncpy(a, b,3);
	printf("%s\n",c);
	char a1[10] = "qwe";
	char b1[10] = "asd";
	char * c1 = strncpy(a1, b1,3);
	printf("%s\n",c1);
}


//////ft_strcat//////
int main()
{
	char a[99] = "asdasd";
	char b[99] = "qweqwe";
	char * c = strcat(a, b);
	printf("%s\n",c);
	char a1[99] = "asdasd";
	char b1[99] = "qweqwe";
	char * c1 = ft_strcat(a1, b1);
	printf("%s\n",c1);
}


//////ft_strncat/////
int main()
{
	char a[99] = "asdasd";
	char b[99] = "qweqwe";
	char * c = strncat(a, b, 3);
	printf("%s\n",c);
	char a1[99] = "asdasd";
	char b1[99] = "qweqwe";
	char * c1 = ft_strncat(a1, b1 ,3);
	printf("%s\n",c1);
}


//////ft_strlcat//////

int main()
{
	char a[99] = "asdasdasd";
	char b[99] = "qweasdqwe";
	char c = strlcat(a, b, 3);
	printf("%d\n",c);
	char a1[99] = "asdasdasd";
	char b1[99] = "qweasdqwe";
	char c1 = ft_strlcat(a1, b1 ,3);
	printf("%d\n",c1);
}

//////ft_strchr//////

int main(int argc, char const *argv[])
{
	char a[10] = "qweasdzxc";
	printf("%s\n",strchr(a, 'z'));
	char a1[10] = "qweasdzxc";
	printf("%s\n",ft_strchr(a, 'z'));
	return 0;
}


/////ft_strrchr////
int main(int argc, char const *argv[])
{
	char a[10] = "qwzeasdzxc";
	printf("%s\n",strrchr(a, 'z'));
	char a1[10] = "qweasdzxc";
	printf("%s\n",ft_strrchr(a, 'z'));
	return 0;
}



///////ft_strstr/////
int main()
{
	char a[99] = "qwaeqweasdqweasd";
	char b[99] = "asd";
	char * c = strstr(a, b);
	printf("%s\n",c);
	char a1[99] = "qwaeqweasdqweasd";
	char b1[99] = "asd";
	char * c1 = ft_strstr(a1, b1);
	printf("%s\n",c1);
	return 0;
}



////////ft_strcmp/////////
int main()
{
	char a[99] = "qwaeqweasdqweasd";
	char b[99] = "asd";
	int c = strcmp(a, b);
	printf("%d\n",c);
	char a1[99] = "qwaeqweasdqweasd";
	char b1[99] = "asd";
	int c1 = ft_strcmp(a1, b1);
	printf("%d\n",c1);
	return 0;
}

////////ft_strncmp///////
int main()
{
	char a[99] = "asd";
	char b[99] = "as";
	int c = strncmp(a, b, 3);
	printf("%d\n",c);
	char a1[99] = "asd";
	char b1[99] = "as";
	int c1 = ft_strncmp(a1, b1, 3);
	printf("%d\n",c1);
	return 0;
}

///////ft_atoi///////
int main()
{
	char c[99] = "-142wqw5qe";
	printf("%d\n",atoi(c));
	char c1[99] = "-142wqw5qe";
	printf("%d\n",ft_atoi(c));
	return 0;
}

//////ft_isalpha/////ft_isdigit/////
#include <ctype.h>
int main()
{
	int i = 0;
	char c[99] = "Ca+1w*9(";
	while (c[i] != 0)
	{
		printf("%d\n",isalpha(c[i]));
		i++;
	}
	i = 0;
	printf("\n");
	char c1[99] = "Ca+1w*9(";
	while (c1[i] != 0)
	{
		printf("%d\n", isalpha(c1[i]));
		i++;
	}
	return 0;
}

///////ft_isalnum//////ft_isascii/////
#include <ctype.h>
int main()
{
	int i = 0;
	char c[99] = "Ca+1w*9(";
	while (c[i] != 0)
	{
		printf("%d\n",isalnum(c[i]));
		i++;
	}
	i = 0;
	printf("\n");
	char c1[99] = "Ca+1w*9(";
	while (c1[i] != 0)
	{
		printf("%d\n", ft_isalnum(c1[i]));
		i++;
	}
	return 0;
}

/////////ft_strclr//////////
int main()
{
	int i = 0;
	char * c = malloc(10);
	while (i < 9)
	{
		c[i] = '1';
		i++;
	}
	printf("%s\n",c);
	ft_strclr(c);
	printf("%s\n",c);	
}
/////ft_striter/////
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
///////ft_strmap//////
char foo(char c)
{
	return c+1;
}

int main()
{
	char i[99] = "Hello";
	printf("%s\n",i);
	char *ret = ft_strmap(i, foo);
	printf("%s\n",ret);
	return 0;
}
/////ft_strmapi//////
char			uf_strmapi_callback(unsigned int i, char s)
{
	return (s + i);
}

int				main(void)
{
	char		str[] = "Hello";
	char		empty[] = "";
	char		*ret;

	ft_strmapi(NULL, NULL);
	ft_strmapi(empty, NULL);
	ret = ft_strmapi(str, uf_strmapi_callback);
	printf("%s\n",ret);///"Hfnos"

	return (1);
}
