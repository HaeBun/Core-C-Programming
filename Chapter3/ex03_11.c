// 매크로 상수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14	// 매크로 상수 정의

int ex03_11(void)
{
	double radius = 0;
	double area = 0;

	printf("반지름? ");
	scanf("%lf", &radius);

	area = PI * radius * radius;
	printf("원의 면적: %.2f\n", area);
	printf("PI = %.2f\n", PI);
	return 0;
}