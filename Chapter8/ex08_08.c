// 배열의 0번 원소를 가리키는 포인터에 증감 연산을 수행한 결과
#include <stdio.h>

int ex08_08(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *p = &arr[0];
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("p= %p, ", p);
		printf("*p = %d\n", *p);
	}

	return 0;
}