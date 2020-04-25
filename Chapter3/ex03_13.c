// const 변수의 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex03_13(void)
{
	int amount = 0, price = 0;
	const double VAT_RATE = 0.1;	// 부가가치세율
	int total_price = 0;

	printf("수량? ");
	scanf("%d", &amount);

	printf("단가? ");
	scanf("%d", &price);

	total_price = amount * price * (1 + VAT_RATE);
	printf("합계: %d\n", total_price);

	//VAT_RATE = 0.15;	const 변수를 변경하려고 하면 컴파일 에러가 발생하므로 주석 처리 한다.

	return 0;
}