/*
10 3x3 행렬의 합을 구하는 add_matrix 함수를 작성하시오. 
add_matrix 함수를 이용해서 행렬의 합을 구하는 프로그램을 작성하시오.
행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.

a11  a12  a13     b11  b12  b13     a11+b11  a12+b12  a13+b13
a21  a22  a23  +  b21  b22  b23  =  a21+b21  a22+b22  a23+b23
a31  a32  a33     b31  b32  b33     a31+b31  a32+b32  a33+b33

실행결과
x 행렬:
 10  20  30
 40  50  60
 70  80  90
y 행렬:
  9   8   7
  6   5   4
  3   2   1
x + y 행렬:
 19  28  37
 46  55  64
 73  82  91
*/
#include <stdio.h>

void add_metrix(int* x, int* y, int* z) {
	int i;
	for (i = 0; i < 9; i++) {
		z[i] = x[i] + y[i];
	}
}

void pa08_10() {
	int arr[3][9];
	int i, x_value = 0, y_value = 9;

	printf("x 행렬:\n");
	for (i = 0; i < 9; i++) {
		x_value += 10;
		arr[0][i] = x_value;

		printf(" %2d", arr[0][i]);
		if (i % 3 == 2)
			printf("\n");
	}
	printf("\ny 행렬:\n");
	for (i = 0; i < 9; i++) {
		arr[1][i] = y_value;
		y_value--;

		printf(" %2d", arr[1][i]);
		if (i % 3 == 2)
			printf("\n");
	}
	printf("\nx + y 행렬:\n");
	add_metrix(arr[0], arr[1], arr[2]);
	for (i = 0; i < 9; i++) {
		printf(" %2d", arr[2][i]);
		if (i % 3 == 2)
			printf("\n");
	}
}