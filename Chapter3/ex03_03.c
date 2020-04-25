// 부호 있는 정수와 부호 없는 정수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex03_03(void)
{
	short a = -10;
	unsigned short b = 65526;

	printf("a = %d, %08x\n", a, a);	// a, b의 값을 10진수와 16진수로 출력해서 2진 표현을 비교해본다.
	printf("b = %u, %08x\n", b, b);	// 부호 없는 정수를 출력할 때는 %u를 사용한다.

	return 0;
}