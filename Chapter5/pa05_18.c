/*
18. 17���� ���� ��� ���� ���α׷��� ���� �ð��� 0�� �Էµ� ������ �ݺ� �����ϵ��� �����Ͻÿ�.

������
���� �ð�(��)? [2000]
���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.
���� �ð�(��)? [25]
���� ���: 2000��
���� �ð�(��)? [300]
���� ���: 25000��
���� �ð�(��)? 0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_18(void)
{
	int minute, price_type, price;

	do {
		printf("���� �ð�(��)? ");
		scanf("%d", &minute);
		price_type = minute / 10;

		if (minute % 10 != 0) price_type++; // 1���̶� �� ����ϸ� ���� �ݾ����� ���

		if (minute == 0) break;

		if (price_type >= 3)
		{
			price = 2000;
			price_type -= 3;
		}

		if (price_type < 24) 
			price += 1000 * price_type;
		else if (price_type < 144) price = 25000;

		else
		{
			printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.\n");
			continue;
		}
		printf("�������: %d��\n", price);
	} while (minute != 0);
}