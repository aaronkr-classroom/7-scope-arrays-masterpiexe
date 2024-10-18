#include<stdio.h>
void test1()
{
	 int data = 0;
	printf("%d, ", data++);
}
void test2()
{
	static int data=0;
	printf("%d, ", data++);
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		test1();
	}
	printf("Test2 runed \n");
	for (int i = 0; i < 5; i++)
	{
		test2();
	}
	
	
	return 0;
}