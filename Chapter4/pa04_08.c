/*
8. 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오. 
이때 파이는3.141592라고 하자.

V = 4/3 PI * r^3 * h
V 구의 부피

실행결과
반지름의 길이? [5]
구의 부피: 523.

★
C 언어에는 제곱이나 세제곱을 구하는 연산자가 없다. 
대신 * 연산자를 이용해서 여러 번 곱하거나 라이브러리 함수인 pow 함수를 이용한다.
pow 함수를 사용하려면 #include <math.h>가 필요하다.
#include <math.h>
double x = pow(2,3);		// x는 23이므로 8이 된다.
double y = pow(25, 0.5);	// y는 250.5이므로 5가 된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>
#include <math.h>

int pa04_08(void)
{
	int r;
	double volume;
	printf("반지름의 길이? ");
	scanf("%d", &r);

	volume = (4.0 / 3.0) * PI * pow(r, 3);

	printf("구의 부피: %f", volume);
}