// ���� ������� ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex04_06(void)
{
	int a = 0;
	double b = 0;
	int c = 0;

	a = 123;		// a�� 123����
	printf("a = %d\n", a);
	printf("a = %d\n", a = 456);				// a�� 456 ���� �� a�� ���� ������ ��
	printf("b = %d\n", b = a + 0.5);			// b�� a + 0.5 ���� �� b�� ���� ������ ��
	printf("c = %d\n", c = printf("ABC\n"));	// printf �Լ��� ���� ���� c�� �����ϰ� c�� ���� ������ ��

	return 0;
}