// 매크로 상수로 배열의 크기를 지정하는 경우
#include <stdio.h>
#define ARR_SIZE 5	// 배열의 크기로 사용할 매크로 상수의 정의

int ex07_02(void)
{
	int arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		arr[i] = 0;
	}

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
