// ���е� �����ϱ�
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int ex02_05()
{
	int num;			//������ ���� ����

	printf("����? ");	// ������ �Է��� �ϵ��� ����ڿ��� �˷��ֱ� ���� ��¹�
	scanf("%d", &num);	// num�� 10������ ���� �Է�

	printf("10���� %d�� 16���� %x�Դϴ�.\n", num, num);

	return 0;
}