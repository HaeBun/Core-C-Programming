// �� �������� ��� ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex04_09(void)
{
	int month;

	printf("�� ��? ");
	scanf("%d", &month);

	if (month >= 6 && month <= 8)	// �� AND
		printf("������ ��� ����\n");
	if (month < 6 || month > 8)		// �� OR
		printf("�Ϲ� ��� ����\n");

	//if (!(month >= 6 && month <= 8))	// �� NOT
	//		printf("�Ϲ� ��� ����\n");

	return 0;
}