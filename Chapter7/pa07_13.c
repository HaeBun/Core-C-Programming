/*
13. 비트 OR 연산자를 이용하면 두 이미지를 합칠 수 있다.
크기가 같은 2개의 unsigned char 배열을 비트 OR 연산한 결과를 출력하는 프로그램을 작성하시오.
unsigned char 배열 2개는 크기가 16인 배열로 선언하고 임의의 데이터(0~255)를 채우고, 비트 OR 연산 결과를 저장할 배열을 따로 선언해서 사용하시오.

실행결과
image1: FC C5 13 89 15 a6 1E 27 38 2D 7C 43 7B 16 DC 34
image2: EB F7 D6 3E 88 8D C8 A8 80 4A 76 5E 08 71 54 68
image3: FF F7 D7 BF 9F AF DE AF B8 6F 7E 5F 7B 77 DC 7C

★
unsigned char 배열을 임의의 값으로 채우려면 srand, time rand 함수를 이용한다.
srand( (unsigned int) time(0) );
for(i = 0 ; i < 16 ; i++)
	 image[i] = rand() % 256;	// 0~255사이의 임의의 값

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pa07_13() {
	int i;
	unsigned char image1[16], image2[16], image3[16];

	srand((unsigned int)time(0));
	for (i = 0; i < 16; i++) {
		image1[i] = rand() % 256;
		image2[i] = rand() % 256;
		image3[i] = image1[i] | image2[i];
	}

	printf("image1:");
	for (i = 0; i < 16; i++) {
		printf(" %02X", image1[i]);
	}
	printf("\nimage2:");
	for (i = 0; i < 16; i++) {
		printf(" %02X", image2[i]);
	}
	printf("\nimage3:");
	for (i = 0; i < 16; i++) {
		printf(" %02X", image3[i]);
	}
}