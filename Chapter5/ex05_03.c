// 0으로 나누기 검사

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ex05_03(void) {
	int x, y;

	printf("정수 2개를 입력하세요: ");
	scanf("%d %d", &x, &y);

	if (y != 0)
		printf("%d / %d = %f\n", x, y, (double)x / y);
	else
		printf("0으로 나눌 수 없습니다.");

	return 0;
}