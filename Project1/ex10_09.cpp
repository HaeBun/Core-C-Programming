// 예제 10-9 : 구조체를 값으로 전달하는 경우
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	int x, y;	// 점의 좌표
} POINT;

void print_point(POINT pt);

int ex10_09(void)
{
	POINT arr[] = {
		{0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point(arr[i]);	// arr[i]를 pt로 복사해서 전달한다.
		printf(" ");
	}
	printf("\n");

	return 0;
}

void print_point(POINT pt)	// 값에 의한 전달
{
	printf("(%d, %d)", pt.x, pt.y);
}