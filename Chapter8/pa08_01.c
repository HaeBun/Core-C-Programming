/*
1.	크기가 3인 double형 배열의 모든 원소의 주소를 출력하는 프로그램을 작성하시오. 
단, 주소 구하기 연산자를 사용하지 마시오.

실행결과
x[0]의 주소: 0136F830
x[1]의 주소: 0136F838
x[2]의 주소: 0136F840

★ 배열 이름을 포인터인 것처럼 이용하면 주소 구하기 연산자 없이도 배열 원소의 주소를 구할 수 있다.
★ double 배열의 각 원소의 주소가 8바이트씩 차이 나는지 확인한다.
*/
#include <stdio.h>

void pa08_01() {
	double x[3];
	double *q = x;

	int i;
	for (i = 0; i < 3; i++)
		printf("x[%d]의 주소: %X\n", i, q + i);
}