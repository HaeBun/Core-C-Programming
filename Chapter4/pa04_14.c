/*
14. 기본 요금과 월 사용량(k/Wh)을 입력받아 전기 요금을 계산하는 프로그램을 작성하시오.
사용량에 따른 요금은 190원/hWh이다.

전기요금 = 기본 요금 + 월사용량(kWh) x 190원/kWh

실행결과
기본 요금? [1600]
월 사용량(kWh)? [320]
전기 요금: 62400원
*/

#define _CRT_SECURE_NO_WARNINGS
#define Fare 190
#include <stdio.h>

int pa04_14(void)
{
	int basic_fare, kWh, electric_fare;
	printf("기본 요금? ");
	scanf("%d",&basic_fare);

	printf("월 사용량?(kWh)? ");
	scanf("%d", &kWh);

	electric_fare = basic_fare+(kWh * Fare);

	printf("전기 요금: %d원", electric_fare);
}