/*
16. 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 찾아 인덱스를 리턴하는 find_array 함수를 작성하시오.
만일 키 값을 찾을 수 없으면 -1을 리턴한다.

실행결과
23 45 62 12 99 83 23 50 72 37
찾을 값? [ 12 ]
12는 3번째 원소입니다.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fine_array(int key, int arr[]) {
	int i;
	for (i = 0; i < 10; i++) {
		if (key == arr[i]) {
			return i;
			break;
		}
	}

	return -1;
}

void pa07_16() {
	int arr[10] = { 23, 45, 62, 12 ,99, 83, 23, 50, 72, 37 };
	int i, key, chk = 0;

	printf("배열:");
	for (i = 0; i < 10; i++) {
		printf(" %d", arr[i]);
	}

	printf("\n찾을 값? ");
	scanf("%d", &key);

	if (fine_array(key, arr) != -1) {
		printf("%d는 %d번째 원소입니다.", key, fine_array(key, arr));
	}
	else {
		printf("찾으시는 원소가 없습니다.");
	}
}