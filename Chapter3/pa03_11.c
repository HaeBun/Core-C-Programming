/*
11. ��/�޷� ȯ���� ��ȭ�� �Է¹޾� �� �޷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
KRW? [500000]
��/�޷� ȯ��? [1210]
KRW 500000 = USD 413.22

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float krw, exchange_rate, usd;
	printf("KRW? ");
	scanf("%f", &krw);
	
	printf("��/�޷� ȯ��? ");
	scanf("%f", &exchange_rate);

	usd = krw / exchange_rate;
	printf("KRW %.0f = USD %.2f", krw, usd);
}