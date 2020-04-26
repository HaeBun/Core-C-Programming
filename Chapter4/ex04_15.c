// 세 수의 평균 구하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex04_15(void)
{
	int a, b, c;
	double average;
	
	printf("정수 3개? ");
	scanf("%d %d %d", &a, &b, &c);

	average = (double)(a + b + c) / 3;	// 명시적인 형 변환 필요
	printf("평균: %f\n", average);

	return 0;
}