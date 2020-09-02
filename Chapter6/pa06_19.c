/*
19. 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수를 작성하시오.
예를 들어 graph(1200, 100);은 100마다 *을 하나씩 출력하므로 *을 12개 출력하고, 
graph(1200, 10);은 10마다 *을 하나씩 출력하므로 *을 120개 출력한다.
0~9999사이의 임의의 숫자 3개를 생성하고 스케일 100으로 그래프를 출력하는 프로그램을 작성하시오.

실행결과
6880:********************************************************************
3052:******************************
5113:***************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int rnum) {
	int i;

	for (i = 0; i < rnum / 100; i++) {
		printf("*");
	}
}

void main() {
	int i, rnum;
	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) {
		rnum = rand() % 10000;
		printf("%d:", rnum);
		graph(rnum);
		printf("\n");
	}

}
