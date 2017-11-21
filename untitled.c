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
