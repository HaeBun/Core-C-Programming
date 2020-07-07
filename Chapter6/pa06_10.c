/*
10 프로그램을 작성하다보면 0~(N-1) 범위에 있는 임의의 정수를 생성해야 하는 경우가 자주 있다.
표준 C 라이브러리의 rand 함수를 이용해서 0에서 (N-1) 사이에 있는 임의의 정수를 리턴하는 random 함수를 정의하시오.
random 함수를 이용해서 0~99 범위에 있는 임의의 점수 10개를 생성하고 그 합계를 구하는 프로그램을 작성하시오.

실행결과
0~99사이의 임의의 정수를 10개 생성해서 합계를 구합니다.
   2  39  51   1  72  67  51  52  18  99
합계: 452
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int sum, int rValue)
{
	srand((unsigned int)time(NULL));
	int i;
	for (i = 0; i < 10; i++) {
		rValue = rand() % 100;
		printf("%3d", rValue);
		sum += rValue;
	}
	printf("\n합계: %d", sum);
}

int main()
{
	printf("0~99사이의 임의의 정수를 10개 생성해서 합계를 구합니다.\n");
	int sum = 0;
	int rValue = 0;
	random(sum, rValue);
}