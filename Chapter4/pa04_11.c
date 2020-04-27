/*
11. 제품의 가격과 할인율(%)을 입력받아서 할인가와 에누리 금액을 출력하는 프로그램을 작성하시오.

실행결과
제품의 가격? [24000]
할인율(%)? [20]
할인가: 19200원 (4800원 할인)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_11(void)
{
	int price, discount_rate, discount_price;

	printf("제품의 가격? ");
	scanf("%d", &price);

	printf("할인율(%)? ");
	scanf("%d", &discount_rate);

	discount_price = (int)(price * ((float)discount_rate / 100.0));
	price -= discount_price;
	printf("할인가: %d원 (%d원 할인)", price, discount_price);
}