/*
2. 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램을 작성하시오.
화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다.

섭씨 온도 = (화씨온도 - 32) * 5/9

★
정수 나누기 연산 시 5/9는 0이 되므로 5.0/9.0를 사용해야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_02(void)
{
	float F, C;
	printf("화씨온도? ");
	scanf("%f", &F);
	
	C = (F - 32) * (0.5 / 0.9);

	printf("%.2f F = %.2f C", F, C);

	return 0;
}