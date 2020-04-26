/*
5. 반지름과 높이를 정수로 입력받아 원기둥의 부피를 구하는 프로그램을 작성하시오.
이때 파이는 3.141592라고 하자.

V = PI * r^2 * h
V 원기둥의 부피

실행결과
반지름의 길이? [5]
높이? [10]
원기둥의 부피: 785.398000
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int pa04_05(void)
{
	int r, h;
	double result;
	printf("반지름의 길이? ");
	scanf("%d", &r);

	printf("높이? ");
	scanf("%d", &h);

	result = PI * ((float)(r * r) * (float)h);

	printf("원기둥의 부피: %f", result);

}