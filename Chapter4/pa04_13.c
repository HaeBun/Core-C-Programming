/*
13. 직선의 사각점의 좌표 (x1, y1)과 끝점의 좌표 (x2, y2)를 입력받아 두 점을 연결하는 직선의 길이를 구하는 프로그램을 작성하시오.

실행결과
직선의 시작점 (x1, y1)? [0 0]
직선의 끝점 (x2, y2)? [10 20]
직선의 길이: 22.360680
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int pa04_13(void)
{
	float x1, y1, x2, y2;
	float length;

	printf("직선의 시작점 (x1, y1)? ");
	scanf("%f %f", &x1, &y1);
	
	printf("직선의 끝점 (x2, y2)? ");
	scanf("%f %f", &x2, &y2);

	length = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2), 0);
	printf("직선의 길이: %f", length);
}