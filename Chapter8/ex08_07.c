// 배열의 0번 원소를 가리키는 포인터와 '포인터+정수' 연산의 결과
#include <stdio.h>

int ex08_07(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];	// arr[0]의 주소를 p에 저장할 수 있다.

	int i;

	for (i = 0; i < 5; i++) {
		printf("p + %d = %p", i, p + i);			// arr[i]의 주소를 출력
		printf("*(p + %d) = %d\n", i, *(p + i));	// arr[i]를 출력
	}

	return 0;
}