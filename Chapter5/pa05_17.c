/*
17. ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� ����� ���� 30���� 2000��, �� ���Ĵ� 10�д� 1000�������� �Ի��ϸ�, �Ϸ� �ִ� 25000���� ���� �� ����.
���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�.

������
���� �ð�(��)? [52]
���� ���: 5000��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_17(void)
{
	int minute, price_type, price;
	printf("���� �ð�(��)? ");
	scanf("%d", &minute);

	price_type = minute / 10;

	if (minute % 10 != 0) price_type++; // 1���̶� �� ����ϸ� ���� �ݾ����� ���

	if (price_type >= 3) 
	{
		price = 2000;
		price_type -= 3;
	}

	if (price_type < 24) 
	{
		price += 1000 * price_type;
	}
	else
	{
		price = 25000;
	}

	printf("�������: %d��", price);
}