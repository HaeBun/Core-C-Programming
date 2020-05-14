// 변수의 영역 규칙
#include <stdio.h>

void test(void);
double x = 0.01;	// 전역 변수 x

int ex06_13(void)
{
	double x = 0.5;	// main의 지역 변수 x

	while (1) {
		double x = 1.23;							// while 블록의 지역 변수 x
		printf("in white block: x = %f\n", x);		// x는 1.23
		if (x > 1)									// x는 1.23
			break;
	}
	printf("in main block: x = %f\n", x);			// x는 0.5
	test();
	return 0;
}

void test(void)
{
	x *= 10;										// 전역 변수 x = 0.01 * 10 -> 0.1
	printf("in test block: x = %f\n", x);			
}