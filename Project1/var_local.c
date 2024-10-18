#include<stdio.h>
int result = 0;

void sum(int x,int y)
{
	result= x + y;
	
}
int main()
{
	int a = 3,
		b = 5;
	sum(3, 5);

	printf("%d + %d = %d", a, b, result);
	return 0;
}