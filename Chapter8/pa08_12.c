/*
12. 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장해서 리턴하는 find_all_in_array 함수를 작성하시오
이 함수는 찾은 항목의 개수를 리턴한다. 예를 들어 배열에서 12를 2개 찾았으면 2를 리턴하고 찾은 항목의 인덱스는 매개변수인 인덱스 배열에 저장한다.
만일 항목을 찾을 수 없으면 0을 리턴한다.

실행결과
12 45 62 12 99 83 23 12 72 37
찾을 값? [12]
찾은 항목은 모두 3개입니다.
찾은 항목의 인덱스: 0 3 7

★find_all_in_array 함수에서 입력 매개변수로 필요한 것은 다음과 같다.
① 정수형 배열 ② 배열의 크기 ③ 키

★find_all_in_array 함수에서 출력 매개변수로 필요한 것은 찾은 항목의 인덱스를 저장할 배열이다.
이 배열의 크기는 ①의 정수형 배열과 같은 크기라고 가정한다.

★이 함수의 리턴 값은 출력 매개변수인 인덱스 배열에 저장된 인덱스의 개수이다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(int* arr, int* idx, int search) {
	int cnt = 0, i;
	for (i = 0; i < 10; i++) {
		if (arr[i] == search) {
			idx[cnt] = i;
			cnt++;
		}
	}
	return cnt;
}

void pa08_12() {
	int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
	int idx[10];
	int i, search;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n찾을 값? ");
	scanf("%d", &search);
	int result = find_all_in_array(arr, idx, search);
	printf("찾은 항목은 모두 %d개입니다.\n", result);
	printf("찾은 항목의 인덱스:");
	for (i = 0; i < result; i++) {
		printf("%d ", idx[i]);
	}
}