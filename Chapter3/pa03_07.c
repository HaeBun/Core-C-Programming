/*
7. 실수 값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오.
실수 값을 입력받을 때는 12.34처럼 소수 표기 방법이나 1.234e처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고 제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력하시오.

실행결과
실수? [3.0e-1]
제곱: 9.000000e-02
세제곱: 2.700000e-02

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float f;

	printf("실수? ");
	scanf("%f", &f);
	printf("제곱: %e\n", f * f);
	printf("세제곱: %e", f * f * f);
}