/*
15. 우리가 보통 알고 있는 환율은 매매기준율이다.
실제 달러를 구입할 때는 매매기준율에 은행의 환전수수료를 더해서 환율이 결정된다.
환전수수료는 환전우대율에 따라 달라진다.
보통 환전수수료율은 은행마다 미리 정해지며, 환전우대율은 고객마다 다르게 책정된다.
환전수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율고 환전우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 결정하고,
구입하고자 하는 달러가 얼마인지 입력받아서 뭔 원에 해당하는지 출력하는 프로그램을 작성하시오

현찰 매입 시 환율 = 매매기준율 + 환전수수료

환전수수료 = 매매기준율 * 환전수수료율 * ( 1 - 환전우대율 )

실행결과
원/달러 매매기준율? [1190]
환율우대율(0~100%)? [70]
달러 살 때 환율은 1196.247500입니다.
구입할 달러(USD)? [2000]
USD 2000.00 살 때 ==> KRW 2392495.00
*/

#define _CRT_SECURE_NO_WARNINGS
#define Exc_Fee 1.75
#include <stdio.h>

int main(void)
{
	int basic_rate;
	float USD, KRW, pre_exc_rate;
	double exchange_rate ,exchange;

	printf("원/달러 매매기준율? ");
	scanf("%d", &basic_rate);

	printf("환율우대율(0~100%)? ");
	scanf("%f", &pre_exc_rate);


	exchange = basic_rate * (double) (Exc_Fee * (1.0 - (pre_exc_rate/100))) / 100.0;
	exchange_rate = basic_rate + exchange;

	printf("달러 살 때 환율은 %f입니다.\n", exchange_rate);
	printf("구입할 달러(USD)? ");
	scanf("%f", &USD);

	KRW = USD * exchange_rate;

	printf("USD %.2f 살때 ==> KRW %.2f", USD, KRW);
}