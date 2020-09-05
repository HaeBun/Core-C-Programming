/*
14. ���� ��� ���α׷����� ��� ��Ͽ� �ִ� ����� ������ ������ �ڼ��� ���� ����� �ִ�.
�� ���� ���ó�� ũ�Ⱑ 10�� ������ �迭�� ���Ҹ� ������ ������ �ڼ��� ���α׷��� �ۼ��Ͻÿ�.
ũ�Ⱑ 10�� ������ �迭�� 0~99������ ������ ������ ä���� �׽�Ʈ�Ѵ�.

������
���� ��: 12 6 80 42 67  9  8  7 56 48
���� ��: 80 64 7 42 12 56  8 67 48  9
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int arr [], int n)
{
	if (n > 1)
	{
		size_t i;
		for (i = 0; i < n - 1; i++)
		{
			size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
			int t = arr[j];
			arr[j] = arr[i];
			arr[i] = t;
		}
	}
}

void pa07_14() {
	int i;
	int arr[10];

	srand((unsigned int)time(0));
	printf("���� ��:");
	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
		
		printf(" %2d", arr[i]);
	}

	printf("\n���� ��:");
	shuffle(arr, 10);
	for (i = 0; i < 10; i++) {
		printf(" %2d", arr[i]);
	}
}
