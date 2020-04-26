/*
4. 용매의 질량과 용질의 질량을 정수로 입력받아 용액이 퍼센트 농도를 구하는 프로그램을 작성하시오.
용매의 질량과 용질의 질량은 g 단위로 입력받는다.

농도(%) = (용질의 질량 / 용매의 질량 + 용질의 질량) x 100

실행결과
용매(g)? [100]
용질(g)? [15]
농도: 13.04 %
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_04(void)
{
	int solvent, brush;
	float result;

	printf("용매(g)? ");
	scanf("%d", &solvent);

	printf("용질(g)? ");
	scanf("%d", &brush);

	result = ((float)brush / (float)(solvent + brush)) * 100.0;
	printf("농도: %.2f %%", result);
}