/*
7. 직각 삼각형에서 직각을 낀 두 변 a, b의 길이를 입력받아 빗변의 길이를 구하는 프로그램을 작성하시오.

c^2 = a^2 + b^2
c 빗변

실행결과
밑변? [10]
높이? [25]
빗변의 길이: 22.360680

★
C 언어에서는 제곱근을 구하는 연산자가 없다.
제곰근을 구할 때는 라이브러리 함수인 sqrt 함수를 이용한다.
sqrt 함수를 사용하려면 #include <math.h>가 필요하다.
#include <math.h>
double x = sqrt(25.0);	// x는 5.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int pa04_07(void)
{
	int base, height;
	double result;

	printf("밑변? ");
	scanf("%d", &base);

	printf("높이? ");
	scanf("%d", &height);

	result = sqrt((height*height)+(base*base), 0);

	printf("빗변의 길이: %f", result);
}