/*
11. 원/달러 환율과 원화를 입력받아 몇 달러인지 출력하는 프로그램을 작성하시오.

실행결과
KRW? [500000]
원/달러 환율? [1210]
KRW 500000 = USD 413.22

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float krw, exchange_rate, usd;
	printf("KRW? ");
	scanf("%f", &krw);
	
	printf("원/달러 환율? ");
	scanf("%f", &exchange_rate);

	usd = krw / exchange_rate;
	printf("KRW %.0f = USD %.2f", krw, usd);
}