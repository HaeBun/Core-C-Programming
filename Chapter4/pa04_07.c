/*
7. ���� �ﰢ������ ������ �� �� �� a, b�� ���̸� �Է¹޾� ������ ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

c^2 = a^2 + b^2
c ����

������
�غ�? [10]
����? [25]
������ ����: 22.360680

��
C ������ �������� ���ϴ� �����ڰ� ����.
�������� ���� ���� ���̺귯�� �Լ��� sqrt �Լ��� �̿��Ѵ�.
sqrt �Լ��� ����Ϸ��� #include <math.h>�� �ʿ��ϴ�.
#include <math.h>
double x = sqrt(25.0);	// x�� 5.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int pa04_07(void)
{
	int base, height;
	double result;

	printf("�غ�? ");
	scanf("%d", &base);

	printf("����? ");
	scanf("%d", &height);

	result = sqrt((height*height)+(base*base), 0);

	printf("������ ����: %f", result);
}