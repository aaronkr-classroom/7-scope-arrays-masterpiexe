#include<stdio.h>
#include "encrypt.h"

int main()
{
	extern int shift;
	char msg[100];
	printf("Enter a message to encrypt: ");
	fgets(msg,sizeof(msg),stdin);//scanf_s()�Լ� ���� ù ������� �Է� ���� �� �ִ�
			 //fgets ���� ��� ���⵵ ���� ���� ������
	printf("how many num to shift");
	scanf_s("%d", &shift);
	
	
	char*new_msg=encrypt(msg);
	

	printf("Encrypted: %s\n", new_msg);
	return 0;

}