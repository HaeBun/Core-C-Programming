/*
1. �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
�� ���� ���� ? [5]
���簢���� ����: 25
���簢���� �ѷ�: 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa03_01(void)
{
	int length;
	printf("�� ���� ���� ? ");
	scanf("%d", &length);

	printf("���簢���� ����: %d\n", length * length);
	printf("���簢���� �ѷ�: %d", length * 4);
}