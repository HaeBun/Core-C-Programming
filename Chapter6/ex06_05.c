// ���� ������ ���ϴ� get_area �Լ��� ��� ��

#include <stdio.h>

double get_area(double radius)
{
	const double PI = 3.14159265359;
	return PI * radius * radius;
}

int ex06_05(void)
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		printf("�������� %d�� �� ���� ����: %.2f\n", i, get_area(i));
	}

	return 0;
}