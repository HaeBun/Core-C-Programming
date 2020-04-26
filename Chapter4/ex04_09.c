// 논리 연산자의 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex04_09(void)
{
	int month;

	printf("몇 월? ");
	scanf("%d", &month);

	if (month >= 6 && month <= 8)	// 논리 AND
		printf("정수기 요금 적용\n");
	if (month < 6 || month > 8)		// 논리 OR
		printf("일반 요금 적용\n");

	//if (!(month >= 6 && month <= 8))	// 논리 NOT
	//		printf("일반 요금 적용\n");

	return 0;
}