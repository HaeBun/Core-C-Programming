/*
19. 영화배우 하정우씨는 영화 출연료를 전액 고정 출연료로 받을지 기본 출연료와 러닝 개런티로 받을지 고민하고 있다.
러닝 개런티는 보통 손익 분기점 관객 수를 초가하는 경우 관객 1인당 얼마로 계약을 하게 된다.
기본 출연료, 손익 분기점 관객 수, 관객 1인당 러닝 개런티를 입력받아서 예상 출연료를 계산해서 출력하는 프로그램을 작성하시오.
예상 관객 수가 백만 명, 2백만 명, ..., 15백만명일 때의 예상 출연료를 구해서 출력한다.

출연료 = 기본 출연료 + (손익 분기점 초과 관객 수)x(관객 1인당 러닝 개런티)

실행결과
기본 출연료? [100000000]
손익 분기점 관객 수? [2000000]
관객 1인당 러닝 개런티? [50]
관객  1000000명 일 때 예상 출연료:  100000000원
관객  2000000명 일 때 예상 출연료:  100000000원
관객  3000000명 일 때 예상 출연료:  150000000원
관객  4000000명 일 때 예상 출연료:  200000000원
관객  5000000명 일 때 예상 출연료:  250000000원
...
관객 15000000명 일 때 예상 출연료:  750000000원
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_19(void)
{
	int basic_fuel, break_even_audience, running_guarantee;
	int total_fuel;

	printf("기본 출연료? ");
	scanf("%d", &basic_fuel);
	printf("손익 분기점 관객 수? ");
	scanf("%d", &break_even_audience);
	printf("관객 1인당 러닝 개런티? ");
	scanf("%d", &running_guarantee);

	total_fuel = basic_fuel;

	for (int i = 1000000; i < 15000000; i += 1000000)
	{
		if (i > break_even_audience) 
			total_fuel = basic_fuel + (i-break_even_audience) * running_guarantee;
		else
			total_fuel = basic_fuel;
		printf("관객 %8d명 일 때 예상 출연료: %9d원\n", i, total_fuel);
	}
}