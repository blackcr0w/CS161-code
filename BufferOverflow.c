#include <stdio.h>


void vulnerable(char* buf){
	gets(buf);
}

int main()
{
	char buf[2];
	int authenticated = 0;
	int a = 1, b = 2, a1 = 16;
	float c = 3.00001, d = 4.001;
	char c1, c2;

	/*vulnerable(buf);*/
	printf("%d\n", authenticated);
	printf("%d %d \n", a, b);
	printf("%3.1f %6f \n", c, d);
	printf("%x\n", a1);
	c1 = getchar();
	c2 = '$';
	putchar(c2);

	printf("%c %c\n", c1, c2);
	return 0;
}