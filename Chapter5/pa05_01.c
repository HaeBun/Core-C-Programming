/*
1. 점의 좌표 (x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.
스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다.

실행결과
선택 영역의 좌상단점 (left, top)? [10 20]
선택 영역의 우하단점 (right, bottom)? [300 400]
점의 좌표 (x, y)? 200 100
직사각형 모양의 선택 영역 내의 점입니다.

★
스크린의 점의 좌표는 스크린의 좌상단점을 원점으로 하고 우측으로 갈수록 x좌표가 증가하고 아래쪽으로 갈수록 y좌표가 증가한다.
예를 들어 해상도 1920x1080인 화면에서 그림에서 스크린의 우하단점인 (w,h)는 (1920, 1080)이 된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa05_01(void)
{
	int left, right, top, bottom, x, y;
	
	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left < x < right && right < y < bottom)
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	else
		printf("직사각형 모양의 선택 영역 내의 점이 아닙니다.");
}
