// 정밀도 지정하기
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int ex02_05()
{
	int num;			//정수형 변수 선언

	printf("정수? ");	// 정수를 입력을 하도록 사용자에게 알려주기 위한 출력문
	scanf("%d", &num);	// num에 10진수로 정수 입력

	printf("10진수 %d는 16진수 %x입니다.\n", num, num);

	return 0;
}