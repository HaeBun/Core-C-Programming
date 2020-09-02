/*
20. ���ڷ� ���޵� �� ��뷮���� ���� ����� ����ϴ� electric_charge �Լ��� �ۼ��Ͻÿ�.
���� ����� �⺻ ��ݰ� �� ��뷮�� ���� ���·� ������� ���ȴ�.
������ ���ǥ�� �����Ͽ� �ܰ躰�� ����Ǵ� �⺻ ��ݰ� ���·� ����� ����Ͻÿ�.
electric_charge �Լ��� �̿��ؼ� �� ��뷮�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�⺻ ���(��/ȣ)						���·� ���(��/hWh)
200kWh ���� ��� 910					ó�� 200kWh���� 93.3
201~400kWh ��� 1,600					���� 200kWh����	187.9
400 kWh �ʰ� ��� 7,300					400kWh �ʰ�

������
�� ��뷮 (kWh)? [350]
���� ���: 48445��
�� ��뷮 (kWh)? [420]
���� ���: 69152��
�� ��뷮 (kWh)? [-1]
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void electric_charge(int kWh) {
	int bp1 = 910, bp2 = 1600, bp3 = 7300;
	float ep1 = 93.3, ep2 = 187.9, ep3 = 280.6;

	int price;

	if (kWh <= 200) {
		price = bp1 + (kWh * ep1);
	}
	else if (kWh > 200 && kWh <= 400) {
		price = bp2 + (200 * ep1) + ((kWh - 200) * ep2);
	}
	else if (kWh > 400) {
		price = bp3 + (200 * ep1) + (200 * ep2) + ((kWh - 400) * ep3);
	}
	
	printf("���� ���: %7d��\n", price);
}

void pa06_20() {
	int kWh;
	do {
		printf("�� ��뷮 (kWh)? ");
		scanf("%d", &kWh);
		
		if(kWh != -1)
			electric_charge(kWh);
	} while (kWh!=-1);
}
