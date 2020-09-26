/*
16. 14���� sort_array �Լ��� ���� ������ �����ϴ� �Ű������� �߰��ؼ� �������� ���İ� �������� ������ ��� ó���� �� �ִ� sort_array_with_order �Լ��� �����Ͻÿ�.
ũ�Ⱑ 10�� int �迭�� 0~99������ ������ ������ ä�� ���� sort_array_with_order �Լ��� �������� ���� ����� �������� ���� ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���
���� ��         : 45 24 53 89 38 92  0 24 66 33
�������� ���� ��:  0 24 24 33 38 45 53 66 89 92
�������� ���� ��: 92 89 66 53 45 39 33 24 24  0

�� ���� ������ �ǹ��ϴ� ��ũ�� ����� �����ؼ� ����� �� �ִ�.
#define ASCENDING  0
#define DESENDING  1
�� ���� ������ �߸� ������ ��� ��� ó������ �����غ���. 
���� ������ 0 �Ǵ� 1�� �����ؾ� �ϴµ� �߸��� ���� �Ű������� ���޵Ǹ� ������ ���� ���� ���� �ְ�, ����Ʈ�� �������� ������ �ϵ��� ���� ���� �ִ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_array_with_order(int* arr) {
	int i, j;

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n�������� ���� ��: ");
	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[i]);
	}

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	
	printf("\n�������� ���� ��: ");
	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[i]);
	}
}

void pa08_16() {
	srand((unsigned)time(NULL));
	int arr[10];
	int i;
	printf("���� ��         : ");
	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
		printf("%2d ", arr[i]);
	}
	sort_array_with_order(arr);
}