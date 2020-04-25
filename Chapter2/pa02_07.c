/*
7. 커피 사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오.
커피 사이즈는 S, T, G 세 가지 문자 중 하나로 입력받는다.

실행결과
커피 사이즈(S,T,G)와 주문 수량? [T 2]
T 사이즈 2잔을 주문합니다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa02_07(void)
{
	char size;
	int quantity;

	printf("커피 사이즈(S,T,G)와 주문 수량? ");
	scanf("%c %d", &size, &quantity);

	printf("%c 사이즈 %d잔을 주문합니다.", size, quantity);
}