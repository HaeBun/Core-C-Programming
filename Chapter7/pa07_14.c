/*
14. 음악 재생 프로그램에는 재생 목록에 있는 곡들을 임의의 순서로 뒤섞는 셔플 기능이 있다.
이 셔플 기능처럼 크기가 10인 정수형 배열의 원소를 임의의 순서로 뒤섞는 프로그램을 작성하시오.
크기가 10인 정수형 배열은 0~99사이의 임의의 정수로 채워서 테스트한다.

실행결과
셔플 전: 12 6 80 42 67  9  8  7 56 48
셔플 후: 80 64 7 42 12 56  8 67 48  9
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int arr [], int n)
{
	if (n > 1)
	{
		size_t i;
		for (i = 0; i < n - 1; i++)
		{
			size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
			int t = arr[j];
			arr[j] = arr[i];
			arr[i] = t;
		}
	}
}

void pa07_14() {
	int i;
	int arr[10];

	srand((unsigned int)time(0));
	printf("셔플 전:");
	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
		
		printf(" %2d", arr[i]);
	}

	printf("\n셔플 후:");
	shuffle(arr, 10);
	for (i = 0; i < 10; i++) {
		printf(" %2d", arr[i]);
	}
}
