/*
15. ������ �迭�� �Ű������� ���޹޾� �迭 ��ü�� 0���� ä��� zero_array �Լ��� �ۼ��Ͻÿ�.

������
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