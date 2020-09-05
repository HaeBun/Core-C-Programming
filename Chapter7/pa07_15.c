/*
15. 정수형 배열을 매개변수로 전달받아 배열 전체를 0으로 채우는 zero_array 함수를 작성하시오.

실행결과
0 0 0 0 0 0 0 0 0 0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void zero_array(int arr[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

void pa07_15() {
	int i;
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	zero_array(arr, size);

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}