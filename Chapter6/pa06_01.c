/*
1. ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��Ͻÿ�.
get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
����? [10]
����? [20]
���簢���� �ѷ�: 60
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int width, int length)
{
	int circumference;

	circumference = width * 2;
	circumference += length * 2;
	return circumference;
}

int pa06_01(void)
{
	int width, length;

	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &length);

	printf("���簢���� �ѷ�: %d", get_perimeter(width, length));
}