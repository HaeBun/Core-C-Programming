/*
3. 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오.
질량은 kg 단위, 높이는 m 단위로 입력받는다.

위치 에너지 = 9.8 x 질량 x 높이

실행결과
질량(kg)? [10]
높이(m)? [5]
위치에너지: 490.000000 J

*/

#define _CRT_SECURE_NO_WARNINGS
#define Ep 9.8
#include <stdio.h>

int pa03_03(void)
{
	int kg, m;
	float energy = 0.0;

	printf("질량(kg)? ");
	scanf("%d", &kg);
	printf("높이(m)? ");
	scanf("%d", &m);

	energy = Ep * kg * m;

	printf("위치에너지: %fJ", energy);
}