// ��ũ�� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14	// ��ũ�� ��� ����

int ex03_11(void)
{
	double radius = 0;
	double area = 0;

	printf("������? ");
	scanf("%lf", &radius);

	area = PI * radius * radius;
	printf("���� ����: %.2f\n", area);
	printf("PI = %.2f\n", PI);
	return 0;
}