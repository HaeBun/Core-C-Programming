/*
6. �� A�� ��ǥ (x1, y1)�� �� B�� ��ǥ (x2, y2)�� �Է¹޾� �� �� A, B�� ������ ������ ���⸦ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

m = (y2 - y1 / x2 - x1)

������
�� ���� ��ǥ (x1, y1)? [10 20]
�� �ٸ� ���� ��ǥ (x2, y2)? [40 50]
������ ����: 1.000000
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_06(void)
{
	int x1, y1, x2, y2;
	float result;
	printf("�� ���� ��ǥ (x1, y1)? ");
	scanf("%d %d", &x1, &y1);

	printf("�� �ٸ� ���� ��ǥ (x2, y2)? ");
	scanf("%d %d", &x2, &y2);

	result = (float)(y2 - y1) / (float)(x2 - x1);

	printf("������ ����: %f", result);
}
