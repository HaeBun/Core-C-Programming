/*
15. 7���� ���� ���� �ڵ带 �̿��ؼ� ������ �迭�� �����ϴ� sort_array �Լ��� �����Ͻÿ�. 
ũ�Ⱑ 10�� int �迭�� 0~99������ ������ ������ ä�� ���� sort_array �Լ��� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
���� �� : 90 6 96 40 62 48 26 89 48 25
���� �� : 6 25 26 40 48 48 62 89 90 96
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort_array(int* arr) {
	int i, j;
	
	printf("���� �� : ");
	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[i]);
	}

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\n���� �� : ");
	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[i]);
	}

}

void pa08_15() {
	srand((unsigned)time(NULL));
	int arr[10];
	int i;

	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
	}
	sort_array(arr);
}