// ���� ���� ���� ������ ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex02_06()
{
	char name[20];
	int age;
	char gender;

	printf("�̸�, ����, ����(M/F) ������ �Է��ϼ���.\n");
	scanf("%s %d %c", name, &age, &gender);		// 3���� ���� �Է�
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("����: %c\n", gender);

	return 0;
}