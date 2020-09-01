/*
7. 소수(prime number)는 1과 자기 자신만으로 나누어지는 자연수이다.
인자로 전달받은 정수가 소수인지 검사하는 is_prime 함수를 작성하시오.
이 함수를 이용해서 1에서 N사이의 소수를 구해서 출력하고 모두 몇 개인지 출력하는 프로그램을 작성하시오.
N은 사용자로부터 입력받는다.

실행결과
1~N사이의 소수를 구합니다. N은? [ 100 ]
  2   3   5   7  11  13  17  19  23  29  31  37  41  43  47
 53  59  61  67  71  73  79  83  89  97

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int i) {
	int j;
	for (j = 2; i % j; j++);

	if (i == j) {
		return 1;
	}
	else {
		return 0;
	}
}

void main() {
	int i, j, N, cnt = 0;
	printf("1~N사이의 소수를 구합니다. N은? ");
	scanf("%d", &N);

	for (i = 2; i <= N; ++i) {
		if (is_prime(i) == 1) {
			printf("%3d ", i);
			cnt++;
			if (cnt % 15 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n소수는 모두 %d개입니다.", cnt);
}