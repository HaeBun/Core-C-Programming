// ���� ������ ��� ����
#include <stdio.h>

void test_local(void);

int ex06_11(void)
{
	int num = 0;	// main�� num ����

	printf("main: num = %d\n", num);	// main�� num ���
	test_local();

	return 0;
}

void test_local(void)
{
	int num = 100; // test_local�� num ����

	num++;
	printf("test_local: num = %d\n", num);	// test_local�� num ���
}