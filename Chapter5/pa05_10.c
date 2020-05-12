/*
10. 핸드폰 요금 계산서에 보면 "10원 미만 절사" 같은 표현을 볼 수 있다. 
예를 들어 요금이 12345원이면 실제 청구액은 12340원이 되는 것이다.
금액과 절사 단위를 입력받아 절사 기능을 처리하는 프로그램을 작성하시오.
절사 단위는 10의 0승, 10의 1승, 10의 2승 처럼 10의 제곱수로 입력받아야 한다. 
예를 들어 100원 미만 절사를 하려면 절사 단위로 2를 입력받는다.

실행결과
금액? [12345]
절사단위 (10의 지수승)? [2]
금액(100 미만 절사): 12300
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_10(void)
{
	int money, truncation;
	int r = 1;

	printf("금액? ");
	scanf("%d", &money);
	printf("절사단위 (10의 지수승)? ");
	scanf("%d", &truncation);

	for (int i = 1; i < truncation; i++) {
		r *= 10;
	}
	
	money -= money % r;

	printf("금액(100 미만 절사): %d", money);
}