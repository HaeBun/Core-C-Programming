/*
4. ��ǰ�� ���ݰ� �������� ���ڷ� �޾Ƽ� ���ΰ��� �����ϴ� discount_price �Լ��� �����Ͻÿ�.
discount_price �Լ��� �̿��ؼ� �ǸŵǴ� ��ǰ�� ���ؼ� ������ �������� �����ؼ� ���ΰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�������� ���� �Է¹��� ����, �ݺ������� �Էµ� ��ǰ�� ���ݿ� ���Ͽ� ���ΰ��� ������ ����ϸ�, ��ǰ�� �������� 0�� �ԷµǸ� ���α׷��� �����Ѵ�.

������
������(%)? [20]
��ǰ�� ����? [5000]
���ΰ�: 4000��
��ǰ�� ����? [2000]
���ΰ�: 1600��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int discount_price(int price, int discount_rate)
{
	return (int)( price / 100 ) * (100 - discount_rate);
}

int pa06_04(void)
{
	int price, discount_rate;

	printf("������(%%)? ");
	scanf("%d", &discount_rate);

	do
	{
		printf("��ǰ�� ����? ");
		scanf("%d", &price);

		if (price != 0)
			printf("���ΰ�: %d��\n", discount_price(price, discount_rate));

	} while (price != 0);

}