/*
16. 정수의 배수를 구해서 출력하는 프로그램을 작성하시오.
양의 정수를 입력받고 배수를 몇 개나 출력할지 입력받아 정수의 배수를 입력받은 개수만큼 출력하는 프로그램을 작성하시오.

실행결과
양의 정수? [5]
배수의 개수? [10]
5 10 15 20 25 30 35 40 45 50
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_16(void)
{
	int a, b;

	printf("양의 정수? ");
	scanf("%d", &a);
	printf("배수의 개수? ");
	scanf("%d", &b);

	for (int i = 1; i <= b; i++)
	{
		printf("%d ", a * i );
	}
}