// float���� �����÷ο�� ����÷ο�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex03_08(void)
{
	float x = 3.40282e38;	// float���� �ִ밪
	float y = 1.17549e-38;	// float���� �ּҰ�

	printf("x = %30.25e\n", x);
	printf("y = %30.25e\n", y);

	x = x * 100;	// float ���� �����÷ο�
	printf("x = %30.25e\n", x);

	y = y / 1000;	// �����θ� �ٿ��� �Ǽ� ǥ��
	printf("y = %30.25e\n", y);

	y = y / 1000;	// �����θ� �ٿ��� �Ǽ� ǥ��
	printf("y = %30.25e\n", y);

	y = y / 1000;	// float���� ����÷ο�
	printf("y = %30.25e\n", y);

	return 0;
}