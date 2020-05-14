// 지역 변수의 사용 범위
#include <stdio.h>

void test_local(void);

int ex06_11(void)
{
	int num = 0;	// main의 num 선언

	printf("main: num = %d\n", num);	// main의 num 사용
	test_local();

	return 0;
}

void test_local(void)
{
	int num = 100; // test_local의 num 선언

	num++;
	printf("test_local: num = %d\n", num);	// test_local의 num 사용
}