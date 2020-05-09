// if else의 사용 예
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int score;

	printf("퀴즈 점수를 입력하세요: ");
	scanf("%d", &score);

	if (score < 70)
		printf("재시!!!\n");	// score < 70인 경우에 수행된다.
	else
		printf("통과!!!\n");

	return 0;
}