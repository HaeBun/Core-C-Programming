// <limits.h>와 <float.h>를 이용한 오버플로우 발생

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <float.h>

int ex03_12(void)
{
	char a = CHAR_MAX;
	char b = CHAR_MAX + 1;	// 오버플로우
	short c = SHRT_MAX;
	short d = SHRT_MAX + 1;	// 오버플로우
	int e = INT_MAX;
	int f = INT_MAX + 1;	// 오버플로우
	float g = FLT_MAX;
	float h = FLT_MAX * 10;	// 오버플로우

	printf("a = %d, b = %d\n", a, b);
	printf("c = %d, d = %d\n", c, d);
	printf("e = %d, f = %d\n", e, f);
	printf("g = %30.25e, h = %30.25e\n", g, h);

	return 0;
}
