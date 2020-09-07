/*
9. 열 크기가 5인 2차원 int 배열의 모든 원소를 특정 값으로 채우는 fill_2d_array 함수를 작성하시오.
함수의 매개변수로 배열 전체에 대한 포인터와 배열의 행 크기를 전달한다.
열 크기가 5, 행 크기가 4인 2차원 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.

실행결과
배열의 원소에 저장할 값? [ 5 ]
5 5 5 5 5
5 5 5 5 5
5 5 5 5 5
5 5 5 5 5
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_2d_array(int *p, int row, int value) {
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < 5; j++, p++) {
			*p = value;
		}
	}
		
}
void pa08_09() {
	int arr[4][5];
	int value, i, j;
	int (*p)[5] = arr;
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &value);

	fill_2d_array(*p, 4, value);

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}