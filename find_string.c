#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
int str_index(char source[], char searchfor[]);

char pattern[] = "ould";
int my_atoi(char s[]);
int my_atoi2(char s[]);
int my_lower(int c);
double my_atof(char s[]);

int main()
{
	char line[MAXLINE];
	int found = 0;

	while (get_line(line, MAXLINE) > 0)
		if (str_index(line, pattern) >= 0) {
			printf("%s", line);
			found++;
		}
		return found;
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

/*这里function的argument名称还是和declarition时不同，不影响*/
int str_index(char s[], char t[])
{
	int i, j, k;
	for (i = 0; s != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
	}
}

int my_atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

int my_atoi2(cahr s[])
{
/*	C不允许在一个函数之内define另一个函数
	但是可以declare另一个函数*/
	double atof(char s[]);
	return (int) ator(s);
}

int my_lower(int c) 
{
	if (c >= 'A' && c <= 'Z')
		return c - 'A' + 'a';
	else 
		return c;
}

double my_atof(char s[])
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] ==  '-') ? -1 : 1;
}




