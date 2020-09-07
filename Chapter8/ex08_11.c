// 포인터 배열의 선언 및 사용
#include <stdio.h>

int ex08_11(void)
{
	int a, b, c, d, e;
	int *arr[5] = { &a, &b, &c, &d, &e };		// 포인터 배열
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);			// arr[i]는 포인터이다.
	}
	printf("\n");

	return 0;
}