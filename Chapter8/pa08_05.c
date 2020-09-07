/*
5. ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
�迭�� �迭�� ũ��, ����(common difference)�� �Ű������� �޾Ƽ� ���������� �迭�� ä��� arith_seq �Լ��� �����Ͻÿ�.
ù ��° ���� ���� �迭�� 0�� ���ҿ� �־ �����Ѵ�.
arith_seq �Լ��� �̿��ؼ� �Է¹��� ù ��° �װ� ������ ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
ù ��° ��? [ 1 ]
����? [ 2 ]
��������: 1 3 5 7 9 11 13 15 17 19
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
	
	printf("ù ��° ��? ");
	scanf("%d", &term);
	arr[0] = term;
	
	printf("����? ");
	scanf("%d", &common_difference);

	arith_seq(p, 10, common_difference);

	printf("��������:");
	
	for (i = 0; i < 10; i++)
		printf(" %d", arr[i]);
}