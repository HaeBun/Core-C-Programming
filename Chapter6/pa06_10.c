/*
10 ���α׷��� �ۼ��ϴٺ��� 0~(N-1) ������ �ִ� ������ ������ �����ؾ� �ϴ� ��찡 ���� �ִ�.
ǥ�� C ���̺귯���� rand �Լ��� �̿��ؼ� 0���� (N-1) ���̿� �ִ� ������ ������ �����ϴ� random �Լ��� �����Ͻÿ�.
random �Լ��� �̿��ؼ� 0~99 ������ �ִ� ������ ���� 10���� �����ϰ� �� �հ踦 ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
0~99������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.
   2  39  51   1  72  67  51  52  18  99
�հ�: 452
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int sum, int rValue)
{
	srand((unsigned int)time(NULL));
	int i;
	for (i = 0; i < 10; i++) {
		rValue = rand() % 100;
		printf("%3d", rValue);
		sum += rValue;
	}
	printf("\n�հ�: %d", sum);
}

int main()
{
	printf("0~99������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.\n");
	int sum = 0;
	int rValue = 0;
	random(sum, rValue);
}