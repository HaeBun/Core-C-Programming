/*
13. ������ �簢���� ��ǥ (x1, y1)�� ������ ��ǥ (x2, y2)�� �Է¹޾� �� ���� �����ϴ� ������ ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
������ ������ (x1, y1)? [0 0]
������ ���� (x2, y2)? [10 20]
������ ����: 22.360680
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int pa04_13(void)
{
	float x1, y1, x2, y2;
	float length;

	printf("������ ������ (x1, y1)? ");
	scanf("%f %f", &x1, &y1);
	
	printf("������ ���� (x2, y2)? ");
	scanf("%f %f", &x2, &y2);

	length = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2), 0);
	printf("������ ����: %f", length);
}