/*
18. 수학에서 집합(set)은 다중집합(multiset)과 다르게 원소의 중복을 허용하지 않는다.
최대 10개의 정수형 원소를 저장할 수 있는 집합(set)을 구현하시오.
정수를 입력받아 집합의 원소로 추가하고, 그 때마다 집합의 원소들을 출력하시오.

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

int overlap_check(int arr[], int length) {
	int i, j;
	for (i = 0; i <= length; i++) {
		for (j = i + 1; j <= length; j++) {
			if (arr[i] == arr[j]) {
				arr[j] = NULL;
				return i;
			}
		}
	}
	return -1;
}

void pa07_18() {
	int i, j;
	int arr[10];

	for (i = 0; i < 10;) {
		printf("배열에 추가할 원소? ");
		scanf("%d", &arr[i]);

		int chk = overlap_check(arr, i);
		if (chk != -1) {
			printf("해당 원소가 이미 [%d]에 존재합니다.\n", chk);
			for (j = 0; j < i; j++) {
				printf("%d ", arr[j]);
			}
			printf("\n");
			continue;
		}
		for (j = 0; j <= i; j++) {
			printf("%d ", arr[j]);
		}

		printf("\n");
		i++;
	}
}