/*
18. ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�.
0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

������
56�� ���: 1 2 4 7 8 14 28 56 => �� 8��
793�� ���: 1 13 61 793 => �� 4��
101�� ���: 1 101 => �� 2��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisiors(int rnum) {
	int i, cnt= 0;
	printf("%d�� ���: ", rnum);

	for (i = 1; i <= rnum; i++) {

		if (rnum % i == 0) {			
			cnt++;
			printf("%d ", i);
		}
	}
	printf("=> �� %d��\n", cnt);
}


void main() {
	int i, j, cnt=0;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) {
		int rnum = rand() % 1000 + 1;

		divisiors(rnum);
	}

}
