//if�� ��� ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int ex05_01(void)
{
	int score;

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &score);

	if (score < 70)
		printf("���!!!\n"); // score < 70�� ��쿡 ����ȴ�.

	printf("���� ������ ������ ���Դϴ�.\n");

	return 0;
}
