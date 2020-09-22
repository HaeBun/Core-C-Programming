/*
13. 크기가 같은 2개의 정수형 배열을 매개변수로 전달받아 두 배열의 원소들의 값을 맞바꾸는 swap_array 함수를 작성하시오.
swap_array 함수를 이용해서 크기가 10인 두 배열의 값을 맞바꾸는 프로그램을 작성하시오.
배열의 초기값은 마음대로 정해도 된다.

실행 결과
a: 1  3  5  7  9 11 13 15 17 19
b: 0  2  4  6  8 10 12 14 16 18
<< swap_array 호출 후 >>
a: 0  2  4  6  8 10 12 14 16 18
b: 1  3  5  7  9 11 13 15 17 19
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void swap_array(int* arr1, int* arr2) {
	int i, temp;
	
	for (i = 0; i < SIZE; i++) {
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

void pa08_13() {
	int a[SIZE] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int b[SIZE] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };
	int i;

	printf("a:");
	for (i = 0; i < SIZE; i++) {
		printf(" %2d", a[i]);
	}
	printf("\nb:");
	for (i = 0; i < SIZE; i++) {
		printf(" %2d", b[i]);
	}
	printf("\n<< swap_array 호출 후 >>\n");
	swap_array(a, b);
	printf("a:");
	for (i = 0; i < SIZE; i++) {
		printf(" %2d", a[i]);
	}
	printf("\nb:");
	for (i = 0; i < SIZE; i++) {
		printf(" %2d", b[i]);
	}
}