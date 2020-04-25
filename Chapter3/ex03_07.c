// 실수형의 정밀도

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex03_07(void)
{
	float pi1 = 3.141592653589793;
	double pi2 = 3.141592653589793;

	printf("float  형의 pi 값 : %30.25f\n", pi1);
	printf("double 형의 pi 값 : %30.25f\n", pi2);

	return 0;
}