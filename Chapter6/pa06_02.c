/*
2. �� ���� ���̸� �Ű������� ���޹޾� ���簢���� ���̸� ���ϴ� get_area_of_square �Լ��� �ۼ��Ͻÿ�.
get_area_of_square �Լ��� �̿��ؼ� �Է¹��� �� ���� ���̷� ���簢���� ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float get_area_of_square(float length)
{
	return length * length;
}

int pa06_02(void)
{
	float length;
	printf("�� ���� ����? ");
	scanf("%f", &length);
	
	printf("���簢���� ����: %f", get_area_of_square(length));
}