// ��ȣ �ִ� ������ ��ȣ ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex03_03(void)
{
	short a = -10;
	unsigned short b = 65526;

	printf("a = %d, %08x\n", a, a);	// a, b�� ���� 10������ 16������ ����ؼ� 2�� ǥ���� ���غ���.
	printf("b = %u, %08x\n", b, b);	// ��ȣ ���� ������ ����� ���� %u�� ����Ѵ�.

	return 0;
}