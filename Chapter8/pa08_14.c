/*
14. 정수형 배열을 1~(N-1)사이의 임의의 정수로 채워주는 rand_array 함수를 작성하시오.
rand_array 함수를 이용하면 임의의 정수 1개를 생성할 수도 있고 배열 크기만큼 생성할 수도 있다.
이 함수로 0~9사이의 값을 생성해 count 변수에 저장한 다음, 
count번만큼 크기가 10인 int 배열에 0~99사이의 임의의 정수를 채우고 출력하는 프로그램을 작성하시오.

★ int 변수는 크기가 1인 int 배열로 생각할 수 있다.
int score;
rand_array(&count, 1, 10); // 0~9사이의 임의의 정수를 생성해서 count 변수에 저장한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_array(int* count, int first, int last) {
	int i, j;
	int arr[10];
	srand((unsigned)time(NULL));

	for (i = 0; i < count[0] ; i++) {
		for (j = 0; j < last; j++) {
			arr[i] = rand() % 100 + first;
			printf("%2d ", arr[i]);
		}
		printf("\n");
	}
}

void pa08_14() {
	int count;
	printf("count = ");
	
	scanf("%d", &count);

	rand_array(&count, 1, 10);
}