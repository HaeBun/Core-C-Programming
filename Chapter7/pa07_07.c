/*
7. 정수형 배열의 모든 원소를 특정 값으로 채우는 fill_array 함수를 작성하시오.
예를 들어 fill_array(arr, 10, 1);은 크기가 10인 arr 배열의 모든 원소에 1을 대입하라는 의미이다.
크기가 20인 배열을 선언해서 입력받은 값으로 배열 전체를 채우고 출력하는 프로그램을 작성하시오.

실행결과
배열의 원소에 저장할 값? [ 5 ]
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

int fill_array(int arr[], int size, int value) {
	int i;
	for (i = 0; i < size; i++) {
		arr[i] = value;
	}
	return 0;
}

void pa07_07() {
	int i, value;
	int arr[SIZE];
	printf("배열의 원소에 저장할 값? ");

	scanf("%d", &value);

	fill_array(arr, SIZE, value);

	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
}