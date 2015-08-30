#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() 
{
	int len;  // current line length
	int max;  // max line length so far
	char line[MAXLINE];  // current input line
	int longest[MAXLINE];  // copy of longest line so far

	max = 0;
	while (len = getline(line, MAXLINE) > 0)
		if (len > max) {
			max = len;
			copy(line, longest);  
			// 当涉及到from-to的copy时候，最好使用void型函数，这样实现更简单
		}
	if (max > 0)
		printf("longest line: % s", longest);
	return 0;
}

// 函数实体中的变量名称可以和前面declared的不同
int getline(char s[], int lim) 
{
	int c, i;

	for (i = 0; i < lim-1; && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	printf("the 'i' after the for loop is %d\n", i);
	if (c == '\n') {
		s[i] = c;
		++i;
	}

}