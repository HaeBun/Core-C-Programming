// 비트 논리 연산자의 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned short x = 0x12;
	unsigned short y = 0xF0;

	printf("%08x & %08x = %08x\n", x, y, x & y);	// 비트 AND
	printf("%08x | %08x = %08x\n", x, y, x | y);	// 비트 OR
	printf("%08x ^ %08x = %08x\n", x, y, x ^ y);	// 비트 XOR
	printf("~%08x = %08x\n", x, y, ~x);				// 비트 NOT

	return 0;
}