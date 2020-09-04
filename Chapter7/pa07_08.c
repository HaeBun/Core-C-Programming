/*
8. 상품 가격이 저장된 정수형 배열에 대하여 할인율(%)을 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하시오.
상품 가격이 저장된 배열의 크기는 5이고, 상품 가격은 입력받아서 사용한다.
할인된 가격은 별도의 배열에 저장해야 한다.

실행결과
상품가 5개를 입력하세요:
[ 12000 18000 20000 50000 5600 ]
할인율(%)? [ 20 ]
가격:  12000 --> 할인가:   9600
가격:  18000 --> 할인가:  14400
가격:  20000 --> 할인가:  16000
가격:  50000 --> 할인가:  40000
가격:   5600 --> 할인가:   4480
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 5

void pa07_08() {
	int i, discount_rate;
	int arr[ARR_SIZE];
	int arr_dis[ARR_SIZE];
	printf("상품가 5개를 입력하세요:\n");

	for (i = 0; i < ARR_SIZE; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("할인율(%%)? ");
	scanf("%d", &discount_rate);

	for (i = 0; i < ARR_SIZE; i++) {
		arr_dis[i] = (arr[i] / 100) * (100 - discount_rate);
	}

	for (i = 0; i < ARR_SIZE; i++) {
		printf("가격:%7d --> 할인가:%7d\n", arr[i] , arr_dis[i]);
	}

}
