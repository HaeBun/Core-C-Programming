/*
5. 몸무게를 입력받아서 출력하는 프로그램을 작성하시오.
몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력한다.

실행결과
몸무게? [50]
입력한 몸무게는 50.00KG입니다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_05(void)
{
	float weight;

	printf("몸무게? ");
	scanf("%f", &weight);

	printf("입력한 몸무게는 %.2fKG입니다.", weight);
}