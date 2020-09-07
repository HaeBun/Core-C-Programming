/*
7. 실수형 배열에 대해서 원소들을 역순으로 만드는 reverse_array 함수를 작성하시오.
크기가 10인 double 배열에 대해서 원하는 값으로 초기값을 채운 다음 reverse_array 함수의 호출 결과를 확인하는 프로그램을 작성하시오.

실행결과
배열: 1.2 3.1 4.3 4.5 6.7 2.3 8.7 9.5 2.3 5.8
역순: 5.8 2.3 9.5 8.7 2.3 6.7 4.5 4.3 3.1 1.2
*/
#include <stdio.h>

void reverse_array(double *p) {
	float temp;
	int i;

	for (i = 0; i < 5; i++) {
		temp = p[9-i];
		p[9-i] = p[i];
		p[i] = temp;
	}

}

void pa08_07() {
	int i;
	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	double *p = arr;

	printf("배열:");
	for (i = 0; i < 10; i++)
		printf(" %.02f", arr[i]);

	reverse_array(p);

	printf("\n역순:");

	for (i = 0; i < 10; i++)
		printf(" %.02f", arr[i]);
}