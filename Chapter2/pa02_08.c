/*
8. 실수 2개를 입력받아서 합과 차를 구해서 출력하는 프로그램을 작성하시오.

실행결과
실수 2개? [12.34 0.5]
12.340000 + 0.500000 = 12.840000
12.340000 - 0.500000 = 11.840000

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_08(void)
{
	float f1 = 0.0, f2 = 0.0;

	printf("실수 2개? ");
	scanf("%f %f", &f1, &f2);

	printf("%f + %f = %f\n", f1, f2, f1 + f2);
	printf("%f - %f = %f", f1, f2, f1 - f2);
}