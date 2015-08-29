#include <stdio.h>


void vulnerable(char* buf){
	gets(buf);
}

int main()
{
	char buf[2];
	int authenticated = 0;
	int a = 1, b = 2;
	vulnerable(buf);
	printf("%d\n", authenticated);
	printf("%d %d \n", a, b);
	return 0;
}