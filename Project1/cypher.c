#include<stdio.h>
#include "encrypt.h"

int main()
{
	extern int shift;
	char msg[100];
	printf("Enter a message to encrypt: ");
	fgets(msg,sizeof(msg),stdin);//scanf_s()함수 사용시 첫 띄어쓰기까지 입력 받을 수 있다
			 //fgets 사용시 모든 띄어쓰기도 같이 저장 가능함
	printf("how many num to shift");
	scanf_s("%d", &shift);
	
	
	char*new_msg=encrypt(msg);
	

	printf("Encrypted: %s\n", new_msg);
	return 0;

}