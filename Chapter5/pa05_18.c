/*
18. 17번의 주차 요금 정산 프로그램을 주차 시간에 0이 입력될 때까지 반복 수행하도록 수정하시오.

실행결과
주차 시간(분)? [2000]
주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.
주차 시간(분)? [25]
주차 요금: 2000원
주차 시간(분)? [300]
주차 요금: 25000원
주차 시간(분)? 0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_18(void)
{
	int minute, price_type, price;

	do {
		printf("주차 시간(분)? ");
		scanf("%d", &minute);
		price_type = minute / 10;

		if (minute % 10 != 0) price_type++; // 1분이라도 더 사용하면 다음 금액으로 계산

		if (minute == 0) break;

		if (price_type >= 3)
		{
			price = 2000;
			price_type -= 3;
		}

		if (price_type < 24) 
			price += 1000 * price_type;
		else if (price_type < 144) price = 25000;

		else
		{
			printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
			continue;
		}
		printf("주차요금: %d원\n", price);
	} while (minute != 0);
}