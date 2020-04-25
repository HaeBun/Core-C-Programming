/*
1. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

실행결과
한 변의 길이 ? [5]
정사각형의 넓이: 25
정사각형의 둘레: 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa03_01(void)
{
	int length;
	printf("한 변의 길이 ? ");
	scanf("%d", &length);

	printf("정사각형의 넓이: %d\n", length * length);
	printf("정사각형의 둘레: %d", length * 4);
}