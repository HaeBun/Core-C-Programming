/*
5. �������� ���̸� ������ �Է¹޾� ������� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�̶� ���̴� 3.141592��� ����.

V = PI * r^2 * h
V ������� ����

������
�������� ����? [5]
����? [10]
������� ����: 785.398000
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int pa04_05(void)
{
	int r, h;
	double result;
	printf("�������� ����? ");
	scanf("%d", &r);

	printf("����? ");
	scanf("%d", &h);

	result = PI * ((float)(r * r) * (float)h);

	printf("������� ����: %f", result);

}