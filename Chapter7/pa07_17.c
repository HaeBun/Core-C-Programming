/*
17. 수학에서 다중집합(multiset)은 원소의 중복을 허용한다.
최대 10개의 정수형 원소를 저장할 수 있는 다중집합을 프로그램하시오.
정수를 입력받아 집합의 원소를 추가하고, 그 때마다 집합의 원소들을 출력하시오.

실행결과
배열에 추가할 원소? [ 10 ]
10
배열에 추가할 원소? [ 20 ]
10 20
배열에 추가할 원소? [ 10 ]
10 20 10
...
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pa07_17() {
	int cnt = 0, i;
	int arr[10];

	while (cnt < 10) {
		printf("배열에 추가할 원소? ");
		scanf("%d", &arr[cnt]);
		for (i = 0; i <= cnt; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		cnt++;
	}
}