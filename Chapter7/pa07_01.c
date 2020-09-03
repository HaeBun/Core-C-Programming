/*
1. 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.

실행결과
첫 번째 항? [ 1 ]
공차? [ 5 ]
등차수열: 1 6 11 16 21 26 31 36 41 46

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int equidistant(int term, int common_difference) {
	return term + common_difference;
}


int pa07_01(void) {
	int i, term, common_difference;
	int arr[10];

	printf("첫 번째 항? ");
	scanf("%d", &term);
	printf("공차? ");
	scanf("%d", &common_difference);

	printf("등차수열:");
	arr[0] = term;
	printf(" %d", arr[0]);
	for (i = 1; i < 10; i++) {
		arr[i] = equidistant(arr[i-1], common_difference);
		printf(" %d", arr[i]);
	}
}