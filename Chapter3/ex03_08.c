// float형의 오버플로우와 언더플로우

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex03_08(void)
{
	float x = 3.40282e38;	// float형의 최대값
	float y = 1.17549e-38;	// float형의 최소값

	printf("x = %30.25e\n", x);
	printf("y = %30.25e\n", y);

	x = x * 100;	// float 형의 오버플로우
	printf("x = %30.25e\n", x);

	y = y / 1000;	// 가수부를 줄여서 실수 표현
	printf("y = %30.25e\n", y);

	y = y / 1000;	// 가수부를 줄여서 실수 표현
	printf("y = %30.25e\n", y);

	y = y / 1000;	// float형의 언더플로우
	printf("y = %30.25e\n", y);

	return 0;
}