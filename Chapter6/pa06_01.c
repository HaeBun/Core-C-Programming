/*
1. 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하시오.
get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.

실행결과
가로? [10]
세로? [20]
직사각형의 둘레: 60
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int width, int length)
{
	int circumference;

	circumference = width * 2;
	circumference += length * 2;
	return circumference;
}

int pa06_01(void)
{
	int width, length;

	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &length);

	printf("직사각형의 둘레: %d", get_perimeter(width, length));
}