// 배열의 바이트 크기와 크기 구하기
#include <stdio.h>

int ex07_01(void)
{
	int arr[5];		// 크기가 5인 배열 선언
	int byte_size;	// 배열의 바이트 크기를 저장할 변수
	int size;		// 배열의 크기를 저장할 변수
	int i;

	byte_size = sizeof(arr);	// 배열의 바이트 크기
	printf("배열의 바이트 크기: %d\n", byte_size);

	size = sizeof(arr) / sizeof(arr[0]);
	printf("배열의 크기: %d\n", size);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return 0;
}