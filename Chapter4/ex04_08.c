// ���� �������� ��� ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex04_08(void)
{
	int a = 0, b = 0;

	printf("�� ���� ����? ");
	scanf("%d %d", &a, &b);

	printf("%d > %d : %d\n", a, b, a > b);
	printf("%d < %d : %d\n", a, b, a < b);
	printf("%d >= %d : %d\n", a, b, a >= b);
	printf("%d <= %d : %d\n", a, b, a <= b);
	printf("%d == %d : %d\n", a, b, a == b);
	printf("%d != %d : %d\n", a, b, a != b);

	return 0;
}