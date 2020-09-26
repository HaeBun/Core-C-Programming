/*
16. 14번의 sort_array 함수에 정렬 순서를 지정하는 매개변수를 추가해서 오름차순 정렬과 내림차순 정렬을 모두 처리할 수 있는 sort_array_with_order 함수로 정의하시오.
크기가 10인 int 배열에 0~99사이의 임의의 정수를 채운 다음 sort_array_with_order 함수로 오름차순 정렬 결과와 내림차순 정렬 결과를 모두 출력하는 프로그램을 작성하시오.

실행 결과
정렬 전         : 45 24 53 89 38 92  0 24 66 33
오름차순 정렬 후:  0 24 24 33 38 45 53 66 89 92
내림차순 정렬 후: 92 89 66 53 45 39 33 24 24  0

★ 정렬 순서를 의미하는 매크로 상수를 정의해서 사용할 수 있다.
#define ASCENDING  0
#define DESENDING  1
★ 정렬 순서를 잘못 지정한 경우 어떻게 처리할지 생각해보자. 
정렬 순서는 0 또는 1로 지정해야 하는데 잘못된 값이 매개변수로 전달되면 정렬을 하지 않을 수도 있고, 디폴트로 오름차순 정렬을 하도록 만들 수도 있다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_array_with_order(int* arr) {
	int i, j;

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n오름차순 정렬 후: ");
	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[i]);
	}

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	
	printf("\n내림차순 정렬 후: ");
	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[i]);
	}
}

void pa08_16() {
	srand((unsigned)time(NULL));
	int arr[10];
	int i;
	printf("정렬 전         : ");
	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
		printf("%2d ", arr[i]);
	}
	sort_array_with_order(arr);
}