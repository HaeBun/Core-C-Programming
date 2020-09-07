/*
6. 정수형 배열에 대하여 배열의 원소 중 최대값과 최소값을 찾는 get_min_max 함수를 정의하시오.
크기가 10인 int 배열에 대해서 원하는 값으로 초기값을 채운 다음 get_min_max 함수로 최대값과 최소값을 찾아서 출력하시오.

배열: 23 45 62 12 99 83 23 50 72 37
최대값: 99
최소값: 12
*/
#include <stdio.h>

void get_min_max(int *p) {
	int max = p[0], min = p[0];
	int i;

	for (i = 0; i < 10; i++) {
		if (max < p[i]) {
			max = p[i];
		}

		if (min > p[i]) {
			min = p[i];
		}
	}
	printf("\n최대값: %d", max);
	printf("\n최소값: %d", min);
}

void pa08_06() {
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int *p = arr;
	int i; 

	printf("배열:");

	for (i = 0; i < 10; i++) {
		printf(" %d", *(p + i));
	}
	
	get_min_max(p);
}