/*
14. ������ �迭�� 1~(N-1)������ ������ ������ ä���ִ� rand_array �Լ��� �ۼ��Ͻÿ�.
rand_array �Լ��� �̿��ϸ� ������ ���� 1���� ������ ���� �ְ� �迭 ũ�⸸ŭ ������ ���� �ִ�.
�� �Լ��� 0~9������ ���� ������ count ������ ������ ����, 
count����ŭ ũ�Ⱑ 10�� int �迭�� 0~99������ ������ ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�� int ������ ũ�Ⱑ 1�� int �迭�� ������ �� �ִ�.
int score;
rand_array(&count, 1, 10); // 0~9������ ������ ������ �����ؼ� count ������ �����Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_array(int* count, int first, int last) {
	int i, j;
	int arr[10];
	srand((unsigned)time(NULL));

	for (i = 0; i < count[0] ; i++) {
		for (j = 0; j < last; j++) {
			arr[i] = rand() % 100 + first;
			printf("%2d ", arr[i]);
		}
		printf("\n");
	}
}

void pa08_14() {
	int count;
	printf("count = ");
	
	scanf("%d", &count);

	rand_array(&count, 1, 10);
}