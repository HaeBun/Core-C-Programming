// ������ ���� ��Ģ
#include <stdio.h>

void test(void);
double x = 0.01;	// ���� ���� x

int ex06_13(void)
{
	double x = 0.5;	// main�� ���� ���� x

	while (1) {
		double x = 1.23;							// while ����� ���� ���� x
		printf("in white block: x = %f\n", x);		// x�� 1.23
		if (x > 1)									// x�� 1.23
			break;
	}
	printf("in main block: x = %f\n", x);			// x�� 0.5
	test();
	return 0;
}

void test(void)
{
	x *= 10;										// ���� ���� x = 0.01 * 10 -> 0.1
	printf("in test block: x = %f\n", x);			
}