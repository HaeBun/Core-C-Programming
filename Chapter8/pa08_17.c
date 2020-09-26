/*
17. 수학에서 다중집합(multiset)은 원소의 중복을 허용한다.
정수형 배열과 배열의 크기, 현재 들어있는 원소의 개수를 매개변수로 전달해서 원소를 추가하는 add_to_multiset 함수를 작성하시오.
add_to_multiset이 호출되고 나면 현재 들어있는 원소의 개수가 증가되어야 한다.
원소는 최대 배열의 크기만큼만 추가할 수 있다.
만일 더 이상 원소를 추가할 수 없으면 0을 리턴하고, 원소를 추가하는 경우에는 1을 리턴한다.
add_to_multiset 함수를 이용해서 입력받은 정수를 집합의 원소를 추가하고, 그 때마다 집합의 원소들을 출력하는 프로그램을 작성하시오.

배열에 추가할 원소? [ 10 ]
10
배열에 추가할 원소? [ 20 ]
10 20
배열에 추가할 원소? [ 10 ]
10 20 10
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_to_multiset(int* arr, int arr_size, int count) {
	int i;

	if (count < 10) {
		printf("배열에 추가할 원소? ");
		scanf("%d", &arr[count]);
		for (i = 0; i <= count; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return 1;
	}

	return 0; 
}

void pa08_17() {
	int count = 0, i;
	int arr[10];

	for (;;) {
		if (add_to_multiset(arr, 10, count) == 0) {
			break;
		}
		count++;
	}
}