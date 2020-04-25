/*
9. 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.

실행결과
16진수 정수? [12]
16진수 12는 10진수로 18입니다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_09(void)
{
	int num;

	printf("16진수 정수? ");
	scanf("%x", &num);

	printf("16진수 %x는 10진수로 %d입니다.", num, num);

}