/*
10. ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
USD? [150]
��/�޷� ȯ��? [1210]
USD 150.00 = KRW 181500.00

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa03_10(void)
{
	float usd, exchange_rate, krw;
	printf("USD? ");
	scanf("%f", &usd);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &exchange_rate);

	krw = usd * exchange_rate;

	printf("USD %.2f = KRW %.2f", usd, krw);
}