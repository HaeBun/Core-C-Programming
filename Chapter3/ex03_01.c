// ���������� ũ�� ���ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex03_01(void)
{
	char ch;
	int num;
	double x;

	printf("char���� ����Ʈ ũ��: %d\n", sizeof(char));

	printf("short���� ����Ʈ ũ��: %d\n", sizeof(int));
	printf("long���� ����Ʈ ũ��: %d\n", sizeof(long));
	printf("long long���� ����Ʈ ũ��: %d\n", sizeof(long long));

	printf("float���� ����Ʈ ũ��: %d\n", sizeof(float));
	printf("double���� ����Ʈ ũ��: %d\n", sizeof(double));
	printf("long double���� ����Ʈ ũ��: %d\n", sizeof(long double));

	printf("ch ������ ����Ʈ ũ��: %d\n", sizeof ch);
	printf("num ������ ����Ʈ ũ��: %d\n", sizeof num);
	printf("x ������ ����Ʈ ũ��: %d\n", sizeof x);
}