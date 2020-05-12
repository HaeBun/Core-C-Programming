/*
7. 전기 요금은 기본 요금과 월 사용량에 의한 요금으로 계산되는데, 실제로는 누진제가 적용되어 단계별로 적용되는 기본 요금과 월 사용량 요금이 달라진다.
다음의 누진제 요금표를 참고하여 월 사용량을 입력받아 전기 요금을 계산하는 프로그램을 작성하시오.

기본 요금(원/호)
200kWh 이하 사용 : 910
201~ 400kWh 사용 : 1600
400kWh 초과 사용 : 7300

전력량 요금(원/kWh)
처음 200kWh까지  : 93.3
다음 200kWh까지  : 187.9
400 kwh 초과     : 280.6

실행결과
월 사용량 (kWh)? [320]
전기 요금 합계: 42808원
  - 기본 요금:   1600원
  - 전력량요금: 41200원

★
예를 들어 월 사용량이 320kWh인 경우, 기본 요금은 1,600원이고, 전력량 요금은 200 X 93.3 + 120 X 187.9
*/

#define _CRT_SECURE_NO_WARNINGS
#define basicPrice_LOW 910
#define basicPrice_MEDIUM 1600
#define basicPrice_HIGH 7300

#define usePrice_LOW 93.3
#define usePrice_MEDIUM 187.9
#define usePrice_HIGH 280.6

#include<stdio.h>
int pa05_07(void)
{
    int kWh, total, basicPrice, usePrice;
    printf("월 사용량 (kWh)? ");
    scanf("%d", &kWh);

    if (kWh <= 200) 
    {
        basicPrice = basicPrice_LOW;
        usePrice = (int)( kWh * usePrice_LOW );
        total = basicPrice + usePrice;
    }
    else if (kWh <= 400) 
    {
        kWh -= 200;
        basicPrice = basicPrice_MEDIUM;
        usePrice = (int)( (200 * usePrice_LOW) + (kWh * usePrice_MEDIUM) );
        total = basicPrice + usePrice;
    }
    else
    {
        kWh -= 400;
        basicPrice = basicPrice_HIGH;
        usePrice = (int)( (200 * usePrice_LOW) + (200 * usePrice_MEDIUM) + (kWh * usePrice_HIGH) );
        total = basicPrice + usePrice;
    }
    printf("전기 요금 합계: %5d원\n", total);
    printf("  - 기본 요금:  %5d원\n",basicPrice);
    printf("  - 전력량요금: %5d원", usePrice);
}
