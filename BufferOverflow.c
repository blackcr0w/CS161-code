#include <stdio.h>


void vulnerable(char* buf){
	gets(buf);
}

int main()
{
	char buf[2];
	int authenticated = 0;
	vulnerable(buf);
	printf("%d\n", authenticated);
	return 0;
}