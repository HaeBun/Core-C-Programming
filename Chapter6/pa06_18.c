/*
18. 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오.
0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오

실행결과
56의 약수: 1 2 4 7 8 14 28 56 => 총 8개
793의 약수: 1 13 61 793 => 총 4개
101의 약수: 1 101 => 총 2개
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisiors(int rnum) {
	int i, cnt= 0;
	printf("%d의 약수: ", rnum);

	for (i = 1; i <= rnum; i++) {

		if (rnum % i == 0) {			
			cnt++;
			printf("%d ", i);
		}
	}
	printf("=> 총 %d개\n", cnt);
}


void main() {
	int i, j, cnt=0;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) {
		int rnum = rand() % 1000 + 1;

		divisiors(rnum);
	}

}
