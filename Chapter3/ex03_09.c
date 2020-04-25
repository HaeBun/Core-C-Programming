// 변수의 선언 및 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ex03_09(void)
{
	int amount;				// 수량 -> 초기화하지 않은 경우
	int price = 0;			// 단가 -> 정수형 변수는 0으로 초기화
	int total_price = 0;	// 합계 금액 -> 정수형 변수는 0으로 초기화

	printf("amount = %d, price = %d\n", amount, price);	//초기화되지 않은 변수 사용시 컴파일 경고 발생

	printf("수량? ");
	printf("%d", &amount);

	price = 2000;

	total_price = amount * price;	//합계 금액
	printf("합계: %d\n", total_price);

	return 0;
}
/*
경고를 무시하고 실행하면 결과는 이렇게 나온다.

amount = -858993460, price = 0
수량? [2]
합계: 4000원
*/