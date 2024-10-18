#include<stdio.h>
void check_endianness()
{
	//ù �޸� �ּҰ� 0x12�� big end���
	//0x78�̸� little end���
	unsigned int num = 0x12345678;
	unsigned char* byte_ptr = (unsigned char*)&num;

	//��� ����Ʈ �ּҿ� ���� ����ϱ�
	for (int i = 0; i < sizeof(num); i++)
	{
		printf("%p    0x%02x\n", (byte_ptr + i), byte_ptr[i]);
	}
	//ù ����Ʈ �ּҸ� Ȯ���ϰ� �����Ͻ� ����ϱ�
	if (byte_ptr[0] == 0x12)
	{
		printf("\n this is a big endian sys.");
	}
	else if (byte_ptr[0] == 0x78)
	{
		printf("\nthis is a little endian sys");
	}
	else {
		printf("\n unknownendianness.");
	}


}
int main()
{
	check_endianness();
	return 0;

}