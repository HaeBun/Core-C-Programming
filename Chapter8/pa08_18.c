/*
18. 수학에서 집합(set)은 다중집합(multiset)과 다르게 원소의 중복을 허용하지 않는다.
정수형 배열과 배열의 크기, 현재 들어있는 원소의 개수를 매개변수로 전달해서 원소를 추가하는 add_to_set 함수를 작성하시오.
add_to_set이 호출되고 나면 현재 들어있는 원소의 개수가 증가되어야 한다.
원소는 최대 배열의 크기만큼만 추가할 수 있다.
만일 더 이상 원소를 추가할 수 없거나 이미 같은 값의 원소가 있으면 0을 리턴하고, 원소를 추가하는 경우에는 1을 리턴한다.
add_to_set 함수를 이용해서 입력받은 정수를 집합의 원소를 추가하고, 그 때마다 집합의 원소들을 출력하는 프로그램을 작성하시오.

실행결과
배열에 추가할 원소? [ 10 ]
10
배열에 추가할 원소? [ 20 ]
10 20
배열에 추가할 원소? [ 10 ]
해당 원소가 이미 [0]에 존재합니다.
10 20
...
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_to_set(int* arr, int arr_size, int count) {
	int i, j;

	if (count < 10) {
		printf("배열에 추가할 원소? ");
		scanf("%d", &arr[count]);

		int i, j;
		for (i = 0; i <= count; i++) {
			for (j = i + 1; j <= count; j++) {
				if (arr[i] == arr[j]) {
					arr[j] = NULL;
					return 0;
				}
			}
		}
		return 1;
	}
	return 0;
}

void pa08_18() {
	int count = 0, i;
	int arr[10];

	for (;;) {
		int chk = add_to_set(arr, 10, count);
		if (chk != 1) {
			printf("해당 원소가 이미 [%d]에 존재합니다.\n", chk);
			for (i = 0; i < count; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
			continue;
		}
		else {
			for (i = 0; i <= count; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
		count++;
		if (count >= 10) {
			break;
		}
	}
}