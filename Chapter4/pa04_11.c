/*
11. ��ǰ�� ���ݰ� ������(%)�� �Է¹޾Ƽ� ���ΰ��� ������ �ݾ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
��ǰ�� ����? [24000]
������(%)? [20]
���ΰ�: 19200�� (4800�� ����)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_11(void)
{
	int price, discount_rate, discount_price;

	printf("��ǰ�� ����? ");
	scanf("%d", &price);

	printf("������(%)? ");
	scanf("%d", &discount_rate);

	discount_price = (int)(price * ((float)discount_rate / 100.0));
	price -= discount_price;
	printf("���ΰ�: %d�� (%d�� ����)", price, discount_price);
}