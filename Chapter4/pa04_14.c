/*
14. �⺻ ��ݰ� �� ��뷮(k/Wh)�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��뷮�� ���� ����� 190��/hWh�̴�.

������ = �⺻ ��� + ����뷮(kWh) x 190��/kWh

������
�⺻ ���? [1600]
�� ��뷮(kWh)? [320]
���� ���: 62400��
*/

#define _CRT_SECURE_NO_WARNINGS
#define Fare 190
#include <stdio.h>

int pa04_14(void)
{
	int basic_fare, kWh, electric_fare;
	printf("�⺻ ���? ");
	scanf("%d",&basic_fare);

	printf("�� ��뷮?(kWh)? ");
	scanf("%d", &kWh);

	electric_fare = basic_fare+(kWh * Fare);

	printf("���� ���: %d��", electric_fare);
}