/*
7. ������ �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_array �Լ��� �ۼ��Ͻÿ�.
���� ��� fill_array(arr, 10, 1);�� ũ�Ⱑ 10�� arr �迭�� ��� ���ҿ� 1�� �����϶�� �ǹ��̴�.
ũ�Ⱑ 20�� �迭�� �����ؼ� �Է¹��� ������ �迭 ��ü�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
�迭�� ���ҿ� ������ ��? [ 5 ]
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
	printf("�迭�� ���ҿ� ������ ��? ");

	scanf("%d", &value);

	fill_array(arr, SIZE, value);

	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
}