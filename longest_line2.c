#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];  // 记住array是如何初始化的
char longest[MAXLINE]；

int getline(void);
void copy(void);  //由于copy和getline的arguments都被规定成global的，这里只用void就行

int main()
{
	int len;
	extern int max;
	extern char longest[]; // 这里对longest没有再次decare长度，因为之前已经define了

	max = 0;
	while ((len = getline()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0)
		printf("%s", longest);

	return 0;
}

int getline(void)
{
	int c, i;
	extern char line[];


}