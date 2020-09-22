/*
13. ũ�Ⱑ ���� 2���� ������ �迭�� �Ű������� ���޹޾� �� �迭�� ���ҵ��� ���� �¹ٲٴ� swap_array �Լ��� �ۼ��Ͻÿ�.
swap_array �Լ��� �̿��ؼ� ũ�Ⱑ 10�� �� �迭�� ���� �¹ٲٴ� ���α׷��� �ۼ��Ͻÿ�.
�迭�� �ʱⰪ�� ������� ���ص� �ȴ�.

���� ���
a: 1  3  5  7  9 11 13 15 17 19
b: 0  2  4  6  8 10 12 14 16 18
<< swap_array ȣ�� �� >>
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
	printf("\n<< swap_array ȣ�� �� >>\n");
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