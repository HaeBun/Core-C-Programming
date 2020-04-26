/*
9. 무게를 파운드(lb)로 입력받아 킬로그램(kg)으로 변환해서 출력하는 프로그램을 작성하시오.
1 lb는 0.45359237kg에 해당한다.

실행결과
무게(lb)? [5]
5 lb = 2.267962 kg

*/


#define _CRT_SECURE_NO_WARNINGS
#define lbTokg 0.45359237
#include <stdio.h>

int pa03_09(void)
{
	int lb;
	double kg;

	printf("무게(lb)? ");
	scanf("%d", &lb);
	kg = lb * lbTokg;
	printf("%d lb = %f kg", lb, kg);
}