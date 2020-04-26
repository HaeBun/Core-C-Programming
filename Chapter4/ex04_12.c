// 조건 연산자의 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ex04_12(void)
{
	int a, b;
	int result, max;

	printf("2개의 정수? ");
	scanf("%d %d", &a, &b);

	printf("%d는 ", a);
	a % 2 != 0 ? printf("홀수") : printf("짝수");
	printf("입니다.\n");

	result = a > 0 ? a : -a;
	printf("a의 절대값: %d\n", result);

	result = b > 0 ? b : -b;
	printf("b의 절대값: %d\n", result);

	max = a > b ? a : b;
	printf("a, b 중 큰 값: %d\n", max);

	return 0;
}