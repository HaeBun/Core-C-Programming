// ������ ���� �� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ex03_09(void)
{
	int amount;				// ���� -> �ʱ�ȭ���� ���� ���
	int price = 0;			// �ܰ� -> ������ ������ 0���� �ʱ�ȭ
	int total_price = 0;	// �հ� �ݾ� -> ������ ������ 0���� �ʱ�ȭ

	printf("amount = %d, price = %d\n", amount, price);	//�ʱ�ȭ���� ���� ���� ���� ������ ��� �߻�

	printf("����? ");
	printf("%d", &amount);

	price = 2000;

	total_price = amount * price;	//�հ� �ݾ�
	printf("�հ�: %d\n", total_price);

	return 0;
}
/*
��� �����ϰ� �����ϸ� ����� �̷��� ���´�.

amount = -858993460, price = 0
����? [2]
�հ�: 4000��
*/