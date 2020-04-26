/*
10. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.

실행결과
USD? [150]
원/달러 환율? [1210]
USD 150.00 = KRW 181500.00

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa03_10(void)
{
	float usd, exchange_rate, krw;
	printf("USD? ");
	scanf("%f", &usd);
	printf("원/달러 환율? ");
	scanf("%f", &exchange_rate);

	krw = usd * exchange_rate;

	printf("USD %.2f = KRW %.2f", usd, krw);
}