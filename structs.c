#include <stdio.h>

/* this function shows that when const is used in ARRAY argument of
function, the array in the calling function(main) will not be changed*/
void NotModifyArray(const char* a)
{
	printf("before modify: %s\n", a);
	a = "modified a";
	printf("after modify (in function): %s\n", a);
}

void ModifyArray(char *a)
{
	printf("before modify in no const: %s\n", a);
	a = "modified a in no const";
	printf("after modify (in function) in no const: %s\n", a);
}

int main() 
{
	


	int IntArray[5], j = 0;
	for (; j < 5; j ++)
		IntArray[j] = j + 10;
	printf("IntArray = %d, &IntArray = %d\n", IntArray, &IntArray);
	printf("IntArray[0] = %d, &IntArray[0] = %d\n", IntArray[0], &IntArray[0]);

	int ic = 88;
	char ci = 'X';
	ci = ic;
	ic = ci;
	printf("%c, %d\n", ci, ic);
	const int ConstInt;
	printf("%d\n", ConstInt);
	// ConstInt = 2;
	printf("%d\n", ConstInt);
	int modulo = -4 % 5;
	printf("%d\n", modulo);

	char chr[10];
	int i;
	for (i = 0; i < 10; i ++) {
		chr[i] = i + 68;
	}
	printf("%s\n", chr);
	ModifyArray(chr);
	printf("%s\n", chr);

	char *a;
	char* b, *c;
	b = "wocao";
	c = "nima";
	a = "emem";
	printf("%s, %s, %s\n", a, b, c);

	ModifyArray(a);
	printf("after modify (in main): %s\n", a);

	ModifyArray(a);
	printf("after modify (in main) in no const: %s\n", a);



	return 0;
}