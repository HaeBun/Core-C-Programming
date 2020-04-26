/*
6. 점 A의 좌표 (x1, y1)과 점 B의 좌표 (x2, y2)를 입력받아 두 점 A, B를 지나는 직선의 기울기를 구하는 프로그램을 작성하시오.

m = (y2 - y1 / x2 - x1)

실행결과
한 점의 좌표 (x1, y1)? [10 20]
또 다른 점의 좌표 (x2, y2)? [40 50]
직선의 기울기: 1.000000
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_06(void)
{
	int x1, y1, x2, y2;
	float result;
	printf("한 점의 좌표 (x1, y1)? ");
	scanf("%d %d", &x1, &y1);

	printf("또 다른 점의 좌표 (x2, y2)? ");
	scanf("%d %d", &x2, &y2);

	result = (float)(y2 - y1) / (float)(x2 - x1);

	printf("직선의 기울기: %f", result);
}
