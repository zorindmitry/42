

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