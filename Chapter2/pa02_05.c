/*
5. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ����Ѵ�.

������
������? [50]
�Է��� �����Դ� 50.00KG�Դϴ�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_05(void)
{
	float weight;

	printf("������? ");
	scanf("%f", &weight);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", weight);
}