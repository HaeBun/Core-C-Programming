/*
4. 제품의 가격과 할인율을 인자로 받아서 할인가를 리턴하는 discount_price 함수를 정의하시오.
discount_price 함수를 이용해서 판매되는 제품에 대해서 동일한 할인율을 적용해서 할인가를 구하는 프로그램을 작성하시오.
할인율을 먼저 입력받은 다음, 반복적으로 입력된 제품의 가격에 대하여 할인가를 구래서 출력하며, 제품의 가격으로 0이 입력되면 프로그램을 종료한다.

실행결과
할인율(%)? [20]
제품의 가격? [5000]
할인가: 4000원
제품의 가격? [2000]
할인가: 1600원
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int discount_price(int price, int discount_rate)
{
	return (int)( price / 100 ) * (100 - discount_rate);
}

int pa06_04(void)
{
	int price, discount_rate;

	printf("할인율(%%)? ");
	scanf("%d", &discount_rate);

	do
	{
		printf("제품의 가격? ");
		scanf("%d", &price);

		if (price != 0)
			printf("할인가: %d원\n", discount_price(price, discount_rate));

	} while (price != 0);

}