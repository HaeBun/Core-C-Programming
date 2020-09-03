/*
2. 등비수열은 앞의 항에 항상 일정한 수(공비)를 곱하여 만들어가는 수열이다.
크기가 10인 실수형 배열에 대하여 등비수열로 값을 채우려고 한다.
첫 번째 항의 값과 공비(common ratio)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.

실행결과
첫 번째 항? [ 1.2 ]
공비? [ 5 ]
등비수열: 1.2 6 30 150 750 3750 18750 93750 468750 2.34375e+06
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float geometric(float term, float allowance) {
	return term * allowance;
}

int pa07_02(void) {
	int i;
	float term, allowance;
	float arr[10];
	printf("첫 번째 항? ");
	scanf(" %f", &term);

	printf("공비? ");
	scanf(" %f", &allowance);
	
	printf("등비수열:");
	arr[0] = term;
	printf(" %.01f", arr[0]);
	for (i = 1; i < 10; i++) {
		arr[i] = geometric(arr[i-1], allowance);
		printf(" %.0f", arr[i]);
	}
}