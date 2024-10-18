#include<stdio.h>
void check_endianness()
{
	//첫 메모리 주소가 0x12면 big end디언
	//0x78이면 little end디언
	unsigned int num = 0x12345678;
	unsigned char* byte_ptr = (unsigned char*)&num;

	//모든 바이트 주소와 값을 출력하기
	for (int i = 0; i < sizeof(num); i++)
	{
		printf("%p    0x%02x\n", (byte_ptr + i), byte_ptr[i]);
	}
	//첫 바이트 주소를 확인하고 엔디언니스 출력하기
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