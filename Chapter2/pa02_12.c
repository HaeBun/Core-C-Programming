/*
11. �л��� �̸�, �а�, �л� ��ȣ�� �Է¹޾� ������ ���� ����Ʈ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
�̸�? [������]
�а�? [��ǻ�Ͱ��а�]
�й�? [CE1814032]

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_12(void)
{
	char name[20], department[20], cls[20];

	printf("�̸�? ");
	scanf("%s", name);
	printf("�а�? ");
	scanf("%s", department);
	printf("�й�? ");
	scanf("%s", cls);

	printf("=====================================\n");
	printf(" �̸�: %s\n", name);
	printf(" �а�: %s\n", department);
	printf(" �й�: %s\n", cls);
	printf("=====================================\n");
}