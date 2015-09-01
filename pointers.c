#include <stdio.h>

void swap(int *px, int *py);

int main()
{
	int x = 1, y = 2, z[10];
	int *ip;
	double *dp, atof(char *);
	int a = 9, b = 18;

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	ip = &x;
	y = *ip;
	*ip = 0;
	ip = &z[0];
	printf("ip = %d, z = %d\n", ip, z);
	return 0;
}

/*这里表示我定义的px py仍然是指针，只不过规定是指向int的
不是说这里定义的就是int
也就是实际传过来的参数是指针，在swap中使用的也是指针*/
void swap(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}