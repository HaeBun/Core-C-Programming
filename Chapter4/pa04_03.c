/*
3. 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하시오.
질량은 g 단위로 입력받고, 부피는 cm^3 단위로 입력받는다.

밀도(g/cm^3) = 질량(g) / 부피(cm^3)

실행결과
질량(g)? [25]
부피(세제곱센티미터)? [1000]
밀도: 0.025000

★
나누기 연산을 할 때 0으로 나누기를 하면 어떻게 될까?
부피에 0이 입력될 때 결과를 확인해보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float g, volume, result;
	printf("질량(g)? ");
	scanf("%f", &g);

	printf("부피(세제곱센티미터)? ");
	scanf("%f", &volume);

	result = g / volume;
	printf("밀도: %f", result);
}