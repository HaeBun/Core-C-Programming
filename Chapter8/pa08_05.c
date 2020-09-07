/*
5. 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
배열과 배열의 크기, 공차(common difference)를 매개변수로 받아서 등차수열로 배열을 채우는 arith_seq 함수를 정의하시오.
첫 번째 항의 값은 배열의 0번 원소에 넣어서 전달한다.
arith_seq 함수를 이용해서 입력받은 첫 번째 항과 공차로 크기가 10인 정수형 배열에 대하여 등차수열을 구하고 출력하는 프로그램을 작성하시오.

실행결과
첫 번째 항? [ 1 ]
공차? [ 2 ]
등차수열: 1 3 5 7 9 11 13 15 17 19
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arith_seq(int *p, int size, int common_difference) {
	int i;
	for (i = 1; i < size; i++) 
		p[i] = p[i - 1] + common_difference;
}

void pa08_05() {
	int arr[10];
	int *p = arr;
	int i, term, common_difference;
	
	printf("첫 번째 항? ");
	scanf("%d", &term);
	arr[0] = term;
	
	printf("공차? ");
	scanf("%d", &common_difference);

	arith_seq(p, 10, common_difference);

	printf("등차수열:");
	
	for (i = 0; i < 10; i++)
		printf(" %d", arr[i]);
}