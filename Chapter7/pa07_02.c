/*
2. �������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
ũ�Ⱑ 10�� �Ǽ��� �迭�� ���Ͽ� �������� ���� ä����� �Ѵ�.
ù ��° ���� ���� ����(common ratio)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
ù ��° ��? [ 1.2 ]
����? [ 5 ]
������: 1.2 6 30 150 750 3750 18750 93750 468750 2.34375e+06
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
	printf("ù ��° ��? ");
	scanf(" %f", &term);

	printf("����? ");
	scanf(" %f", &allowance);
	
	printf("������:");
	arr[0] = term;
	printf(" %.01f", arr[0]);
	for (i = 1; i < 10; i++) {
		arr[i] = geometric(arr[i-1], allowance);
		printf(" %.0f", arr[i]);
	}
}