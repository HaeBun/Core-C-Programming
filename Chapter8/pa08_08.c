/*
8. 정수형 배열을 특정 값으로 채우는 fill_array 함수를 작성하시오.
단, 포인터와 포인터 역참조 연산자를 이용한다.
fill_array 함수를 이용해서 크기가 20인 int 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.

실행결과
배열의 원소에 저장할 값? [ 5 ]
배열: 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int *p, int value) {
	int i;

	for (i = 0; i < 20; i++, p++)
		*p = value;
}

void pa08_08() {
	int arr[20];
	int i, value;
	int *p = arr;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &value);
	
	fill_array(p, value);

	printf("배열:");
	for(i = 0; i < 20; i++)
		printf(" %d", arr[i]);
}