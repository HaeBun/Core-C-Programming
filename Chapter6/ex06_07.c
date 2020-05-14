// 3개의 정수 중 가장 큰 값을 구하는 get_max 함수의 사용 예
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_max(int a, int b, int c)
{
	int max = a > b ? a : b;
	max = c > max ? c : max;
	return max;
}

int ex06_07(void)
{
	int x, y, z;

	while (1)
	{
		printf("정수 3개를 입력하세요 (0 0 0 입력 시 종료): ");
		scanf("%d %d %d", &x, &y, &z);

		if (x == 0 && y == 0 && z == 0)
			break;
		printf("최대값: %d\n", get_max(x, y, z));
	}
	return 0;
}