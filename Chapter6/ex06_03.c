// 매개변수가 있는 print_sum 함수의 사용 예
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_sum(int count)
{
	int i;
	int num;
	int sum = 0;

	printf("%d개의 정수? ", count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("합계 : %d\n", sum);
}

int ex06_03(void)
{
	int i;

	for (i = 3; i < 10; i += 2)
	{
		print_sum(i);
	}

	return 0;
}