/*
13. ��Ʈ OR �����ڸ� �̿��ϸ� �� �̹����� ��ĥ �� �ִ�.
ũ�Ⱑ ���� 2���� unsigned char �迭�� ��Ʈ OR ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
unsigned char �迭 2���� ũ�Ⱑ 16�� �迭�� �����ϰ� ������ ������(0~255)�� ä���, ��Ʈ OR ���� ����� ������ �迭�� ���� �����ؼ� ����Ͻÿ�.

������
image1: FC C5 13 89 15 a6 1E 27 38 2D 7C 43 7B 16 DC 34
image2: EB F7 D6 3E 88 8D C8 A8 80 4A 76 5E 08 71 54 68
image3: FF F7 D7 BF 9F AF DE AF B8 6F 7E 5F 7B 77 DC 7C

��
unsigned char �迭�� ������ ������ ä����� srand, time rand �Լ��� �̿��Ѵ�.
srand( (unsigned int) time(0) );
for(i = 0 ; i < 16 ; i++)
	 image[i] = rand() % 256;	// 0~255������ ������ ��

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