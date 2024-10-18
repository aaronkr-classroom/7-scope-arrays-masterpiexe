#include<stdio.h>

int sum(int x, int y)
{
	return x + y;

}
int main()
{
	int a = 3,
		b = 5;

	printf("%d + %d = %d", a, b, sum(a, b));
	return 0;
}