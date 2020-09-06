// 포인터의 바이트 크기 구하기
#include <stdio.h>

int ex08_01()
{
	int *pi;
	double *pd;
	char *pc;

	printf("sizeof(pi) = %zd\n", sizeof(pi));	// 4바이트 (32비트 플랫폼)
	printf("sizeof(pd) = %zd\n", sizeof(pd));	// 4바이트 (64비트 플랫폼에선 8바이트)
	printf("sizeof(pc) = %zd\n", sizeof(pc));	// 4바이트

	printf("sizeof(int*) = %zd\n", sizeof(int*));		// 4바이트
	printf("sizeof(double*) = %zd\n", sizeof(double*));	// 4바이트
	printf("sizeof(char*) = %zd\n", sizeof(char*));		// 4바이트

	return 0;
}