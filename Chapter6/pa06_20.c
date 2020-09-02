/*
20. 인자로 전달된 월 사용량으로 전기 요금을 계산하는 electric_charge 함수를 작성하시오.
전기 요금은 기본 요금과 월 사용량에 의한 전력량 요금으로 계산된다.
누진제 요금표를 참고하여 단계별로 적용되는 기본 요금과 전력량 요금을 계산하시오.
electric_charge 함수를 이용해서 월 사용량을 입력받아 전기 요금을 출력하는 프로그램을 작성하시오.

기본 요금(원/호)						전력량 요금(원/hWh)
200kWh 이하 사용 910					처음 200kWh까지 93.3
201~400kWh 사용 1,600					다음 200kWh까지	187.9
400 kWh 초과 사용 7,300					400kWh 초과

실행결과
월 사용량 (kWh)? [350]
전기 요금: 48445원
월 사용량 (kWh)? [420]
전기 요금: 69152원
월 사용량 (kWh)? [-1]
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
	
	printf("전기 요금: %7d원\n", price);
}

void pa06_20() {
	int kWh;
	do {
		printf("월 사용량 (kWh)? ");
		scanf("%d", &kWh);
		
		if(kWh != -1)
			electric_charge(kWh);
	} while (kWh!=-1);
}
