/*
2. ���ο� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
������ ����? [10]
������ ����? [20]
���簢���� ����: 200
���簢���� �ѷ�: 60

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa03_02(void)
{
	int width, height;
	int area, circumference;

	printf("������ ����? ");
	scanf("%d", &width);
	printf("������ ����? ");
	scanf("%d", &height);

	area = width * height;
	printf("���簢���� ����: %d\n", area);

	circumference = (width * 2) + (height * 2);
	printf("���簢���� �ѷ�: %d", circumference);
}