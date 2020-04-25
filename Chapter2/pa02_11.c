/*
11. 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오.
소수점 이하 2자리까지, 소수점 이하 4자리까지, 소수점 이하 6자리까지, 소수점 이하 8자리까지 각각 출력하고, 지수 표기로도 출력해본다.

실행결과
pi = 3.14
pi = 3.1416
pi = 3.141593
pi = 3.14159265
pi = 3.141593e+00

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pi 3.14159265

int pa02_11(void)
{
	printf("%.2f\n", pi);
	printf("%.4f\n", pi);
	printf("%.6f\n", pi);
	printf("%.8f\n", pi);
	printf("%e", pi);

}