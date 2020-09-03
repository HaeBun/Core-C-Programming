/*
3. 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최대값과 최소값을 찾아서 출력하는 프로그램을 작성하시오.
배열의 초기값은 마음대로 정하시오.

실행결과
배열: 23 45 62 12 99 83 23 50 72 37
최대값: 99
최소값: 12
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pa07_03() {
	int arr[10] = { 12, 34, 56, 78 ,99, 26, 31, 48, 1, 35 };
	int max, min;
	int i;

	max = arr[0];
	min = arr[0];
	printf("배열: ");
	for (i = 0; i < 10; i++) {
		printf(" %d", arr[i]);
		if (max < arr[i])	max = arr[i];
		if (min > arr[i])	min = arr[i];
	}
	printf("\n최대값: %d", max);
	printf("\n최소값: %d", min);
}