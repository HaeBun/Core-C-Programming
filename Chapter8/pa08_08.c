/*
8. ������ �迭�� Ư�� ������ ä��� fill_array �Լ��� �ۼ��Ͻÿ�.
��, �����Ϳ� ������ ������ �����ڸ� �̿��Ѵ�.
fill_array �Լ��� �̿��ؼ� ũ�Ⱑ 20�� int �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
�迭�� ���ҿ� ������ ��? [ 5 ]
�迭: 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int *p, int value) {
	int i;

	for (i = 0; i < 20; i++, p++)
		*p = value;
}

void pa08_08() {
	int arr[20];
	int i, value;
	int *p = arr;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &value);
	
	fill_array(p, value);

	printf("�迭:");
	for(i = 0; i < 20; i++)
		printf(" %d", arr[i]);
}