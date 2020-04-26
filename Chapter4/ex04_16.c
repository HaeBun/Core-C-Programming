// 연산자의 우선순위와 결합 규칙

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex04_16(void)
{
	int a = 10, b = 20, c = 30;
	int result;

	result = a + b * c;
	printf("result = %d\n", result);	// a + (b * c)

	result = (a + b) * c;
	printf("result = %d\n", result);	// (a + b) * c

	result = a < b&& c < 0;
	printf("result = %d\n", result);	// (a < b) && (c < 0)

	return 0;
}