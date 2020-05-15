/*
2. 한 변의 길이를 매개변수로 전달받아 정사각형의 넓이를 구하는 get_area_of_square 함수를 작성하시오.
get_area_of_square 함수를 이용해서 입력받은 한 변의 길이로 정사각형의 넓이를 구하는 프로그램을 작성하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float get_area_of_square(float length)
{
	return length * length;
}

int pa06_02(void)
{
	float length;
	printf("한 변의 길이? ");
	scanf("%f", &length);
	
	printf("정사각형의 면적: %f", get_area_of_square(length));
}