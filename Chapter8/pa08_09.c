/*
9. �� ũ�Ⱑ 5�� 2���� int �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_2d_array �Լ��� �ۼ��Ͻÿ�.
�Լ��� �Ű������� �迭 ��ü�� ���� �����Ϳ� �迭�� �� ũ�⸦ �����Ѵ�.
�� ũ�Ⱑ 5, �� ũ�Ⱑ 4�� 2���� �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
�迭�� ���ҿ� ������ ��? [ 5 ]
5 5 5 5 5
5 5 5 5 5
5 5 5 5 5
5 5 5 5 5
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_2d_array(int *p, int row, int value) {
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < 5; j++, p++) {
			*p = value;
		}
	}
		
}
void pa08_09() {
	int arr[4][5];
	int value, i, j;
	int (*p)[5] = arr;
	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &value);

	fill_2d_array(*p, 4, value);

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}