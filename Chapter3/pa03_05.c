/*
5. 길이를 인치(inch)로 입력받아 센티미터(cm)로 변환하는 프로그램을 작성하시오.
1 inch는 2.54cm에 해당한다.

실행결과
길이(inch)? [10]
10.000000 inch = 25.400000 cm

*/

#define _CRT_SECURE_NO_WARNINGS
#define InchtoCM 2.54
#include <stdio.h>

int pa03_05(void)
{
	float inch = 0;
	printf("길이(inch)? ");
	scanf("%f", &inch);
	
	printf("%f inch = %f cm", inch, inch * InchtoCM);
}