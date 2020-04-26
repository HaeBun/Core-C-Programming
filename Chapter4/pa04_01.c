/*
1. 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
질량은 kg 단위, 속력은 m/s 단위로 입력받는다.

운동 에너지 = 1/2 x 질량 x (속력)^2

실행결과
질량(kg)? [2.5]
속력(m/s)? [3]
운동에너지: 11.25 J

★
정수 나누기 연산 시 1/2는 연산의 결과가 정수이므로 0.5가 아니라 0이 된다. 
따라서 1.0/2.0을 하거나 나누기 결과인 0.5를 대신 사용해야 한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_01(void) 
{
	float kg, ms, result;

	printf("질량(kg)? ");
	scanf("%f", &kg);

	printf("속력(m/s)? ");
	scanf("%f", &ms);

	result = 0.5 * kg * (ms * ms);

	printf("운동에너지: %.2f J", result);
}