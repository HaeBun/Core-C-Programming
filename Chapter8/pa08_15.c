/*
15. 7장의 선택 정렬 코드를 이용해서 정수형 배열을 정렬하는 sort_array 함수를 정의하시오. 
크기가 10인 int 배열에 0~99사이의 임의의 정수를 채운 다음 sort_array 함수로 정렬한 결과를 출력하는 프로그램을 작성하시오.

실행결과
정렬 전 : 90 6 96 40 62 48 26 89 48 25
정렬 후 : 6 25 26 40 48 48 62 89 90 96
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort_array(int* arr) {
	int i, j;
	
	printf("정렬 전 : ");
	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[i]);
	}

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\n정렬 후 : ");
	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[i]);
	}

}

void pa08_15() {
	srand((unsigned)time(NULL));
	int arr[10];
	int i;

	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
	}
	sort_array(arr);
}