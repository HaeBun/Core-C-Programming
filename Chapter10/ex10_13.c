// 예제 10-13 : LINE 구조체의 정의 및 사용
#include <stdio.h>
#include <math.h>

typedef struct point		// 점의 좌표
{
	int x, y;
} POINT;

typedef struct line// 직선
{
	POINT start, end;
} LINE;

double get_length(const LINE *ln);

int ex10_13(void)
{
	LINE ln1 = { {10, 20}, {30, 40} };

	printf("직선의 시작점: (%d, %d)\n", ln1.start.x, ln1.start.y);
	printf("직선의 끝점: (%d, %d)\n", ln1.end.x, ln1.end.y);

	printf("직선의 길이: %f\n", get_length(&ln1));
	
	return 0;
}

double get_length(const LINE* ln)	// 직선의 길이 구하는 함수
{
	int dx = ln->end.x - ln->start.x;
	int dy = ln->end.y - ln->start.y;
	
	return sqrt(dx * dx + dy * dy);
}