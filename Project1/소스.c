#include<stdio.h>
int ReturnNum();
int main()
{
	printf("%d", ReturnNum());
	return 0;
}
int ReturnNum()
{
	int num = 5;
	return num;
}