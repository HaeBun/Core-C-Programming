// ������ �Ǽ��� ȥ�� ����
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592		//��ũ�� ��� ����
#include <stdio.h>

int ex04_04(void)
{
	int radius = 0;
	double area, perimeter;

	printf("������? ");
	scanf("%d", &radius);

	area = PI * radius * radius;
	printf("���� ����: %.2f\n", area);

	perimeter = 2 * PI * radius;
	printf("���� �ѷ�: %.2f\n", perimeter);

	return 0;
}