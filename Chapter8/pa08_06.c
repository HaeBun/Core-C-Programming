/*
6. ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ밪�� �ּҰ��� ã�� get_min_max �Լ��� �����Ͻÿ�.
ũ�Ⱑ 10�� int �迭�� ���ؼ� ���ϴ� ������ �ʱⰪ�� ä�� ���� get_min_max �Լ��� �ִ밪�� �ּҰ��� ã�Ƽ� ����Ͻÿ�.

�迭: 23 45 62 12 99 83 23 50 72 37
�ִ밪: 99
�ּҰ�: 12
*/
#include <stdio.h>

void get_min_max(int *p) {
	int max = p[0], min = p[0];
	int i;

	for (i = 0; i < 10; i++) {
		if (max < p[i]) {
			max = p[i];
		}

		if (min > p[i]) {
			min = p[i];
		}
	}
	printf("\n�ִ밪: %d", max);
	printf("\n�ּҰ�: %d", min);
}

void pa08_06() {
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int *p = arr;
	int i; 

	printf("�迭:");

	for (i = 0; i < 10; i++) {
		printf(" %d", *(p + i));
	}
	
	get_min_max(p);
}