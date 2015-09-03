#include <stdio.h>

void my_strcat (char [], char []);

int main()
{
	char a[] = "fooooo";
	char b[] = "barrrr";
	my_strcat(a, b);
	printf("%s\n", a);
	printf("%s\n", b);
	return 0;
}

void my_strcat (char s[], char t[])
{
	int i, j;
	i = j = 0;
	printf("%s\n", s);
	printf("%s\n", t);
	while (s[i++] != '\0')
		;
	while((s[i++] = t[j++]) != '\0')
		printf("%s\n", s);
		;
}