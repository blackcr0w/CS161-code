#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main() 
{
	int len;  // current line length
	int max;  // max line length so far
	char line[MAXLINE];  // current input line
	char longest[MAXLINE];  // copy of longest line so far

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);  
			// 当涉及到from-to的copy时候，最好使用void型函数，这样实现更简单
		}
	if (max > 0)
		printf("longest line: %s", longest);
	return 0;
}

/*函数实体中的变量名称可以和前面declared的不同*/
int get_line(char s[], int lim) 
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	printf("the 'i' after the for loop is %d\n", i);
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0'; // 字符串的结尾必须是\0, 没有实际意义 但是占用内存空间
	return i;
}

/*函数argument中的数组最好不要限定长度*/
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
