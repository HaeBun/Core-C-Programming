/*
17. 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오.
주차 요금은 최초 30분은 2000원, 그 이후는 10분당 1000원씩으로 게산하며, 하루 최대 25000원을 넘을 수 없다.
주차 시간은 24시간을 넘을 수는 없다고 가정한다.

실행결과
주차 시간(분)? [52]
주차 요금: 5000원
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_17(void)
{
	int minute, price_type, price;
	printf("주차 시간(분)? ");
	scanf("%d", &minute);

	price_type = minute / 10;

	if (minute % 10 != 0) price_type++; // 1분이라도 더 사용하면 다음 금액으로 계산

	if (price_type >= 3) 
	{
		price = 2000;
		price_type -= 3;
	}

	if (price_type < 24) 
	{
		price += 1000 * price_type;
	}
	else
	{
		price = 25000;
	}

	printf("주차요금: %d원", price);
}