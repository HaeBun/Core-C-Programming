// if else�� ��� ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int score;

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &score);

	if (score < 70)
		printf("���!!!\n");	// score < 70�� ��쿡 ����ȴ�.
	else
		printf("���!!!\n");

	return 0;
}