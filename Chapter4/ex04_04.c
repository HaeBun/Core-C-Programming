// 정수와 실수의 혼합 연산
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592		//매크로 상수 정의
#include <stdio.h>

int ex04_04(void)
{
	int radius = 0;
	double area, perimeter;

	printf("반지름? ");
	scanf("%d", &radius);

	area = PI * radius * radius;
	printf("원의 면적: %.2f\n", area);

	perimeter = 2 * PI * radius;
	printf("원의 둘레: %.2f\n", perimeter);

	return 0;
}