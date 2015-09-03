/*using statck to implement reverse Poland representation calculator*/
/* 栈不需要放在main中，因为main只是执行操作，
可以放在external中，并且只提供pop, push 两个接口
这样main就不能访问栈了 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100

/*这里的declaration只是说明了argument的类型，没有指定名称*/
int gettop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);

int sp = 0;
double val[MAXVAL];

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = gettop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else 
					printf("error\n");
				break;
			case '\n':
				printf("\t%.8g\n",pop());
				break;
			default:
				printf("error, unknown\n");
				break;
		}
	}
	return 0;
}

void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error, stack is full, cannot push %g\n", f);
}

double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: empty stack\n");
		return 0.0;
	}
}

int gettop(char s[])
{
	int i, c;
	return 0;
}



