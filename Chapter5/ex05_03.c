// 0���� ������ �˻�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ex05_03(void) {
	int x, y;

	printf("���� 2���� �Է��ϼ���: ");
	scanf("%d %d", &x, &y);

	if (y != 0)
		printf("%d / %d = %f\n", x, y, (double)x / y);
	else
		printf("0���� ���� �� �����ϴ�.");

	return 0;
}